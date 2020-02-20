#include "Cadena.h"
#include <string.h>
#include <string.h>

Cadena::Cadena()
{
    cad=new char[2];
    strcpy(cad," ");
}

Cadena::~Cadena()
{
//cout<<"Ejecutando destructor"<<endl;
}

Cadena::Cadena(const char* cade)
{
    cad=new char[strlen(cade)+1];
    strcpy(cad,cade);
}

Cadena::Cadena(const Cadena& objcade)
{
    cad=new char[strlen(objcade.cad)+1];
    strcpy(cad,objcade.cad);
}

Cadena Cadena::operator+(const char* cade)const
{

    char *nue=new char [strlen(cade)+strlen(this->cad)+1];
    if(!nue)
    {
        cerr<<"\nError al reservar memoria para cadena"<<endl;
        Cadena nuevo;
        return nuevo;
    }

    strcpy(nue,this->cad);
    strcat(nue,cade);
    Cadena nuee(nue);
    return nuee;
}

Cadena Cadena::operator+(const Cadena& objcad)const
{
    char *nue=new char [strlen(objcad.cad)+strlen(this->cad)+1];
    if(!nue)
    {
        cerr<<"\nError al reservar memoria para cadena"<<endl;
        Cadena nuevo;
        return nuevo;
    }

    strcpy(nue,this->cad);
    strcat(nue,objcad.cad);
    Cadena nuee(nue);
    return nuee;
}


Cadena& Cadena::operator=(const Cadena& objcade)
{
    if(strlen(this->cad)>strlen(objcade.cad))
    {
        strcpy(this->cad,objcade.cad);
        return *this;
    }

        char *nae=this->cad;
        this->cad=new char[strlen(objcade.cad)+1];
        delete [] nae;
        strcpy(this->cad,objcade.cad);
        return *this;

}

ostream& operator<<(ostream& sal,const Cadena& objcade)
{
    sal<<objcade.cad<<endl;
    return sal;
}

istream& operator>>(istream& ent,Cadena& cad)
{
    ent>>cad.cad;
    return ent;
}

Cadena operator+(const char* cade,const Cadena& objcad)
{
    char* nue=new char[strlen(cade)+strlen(objcad.cad)+1];
    if(!nue)
    {
        cerr<<"\nError al reservar memoria"<<endl;
        Cadena nuecad;
        return nuecad;
    }
    strcpy(nue,cade);
    strcat(nue,objcad.cad);
    Cadena nuecad(nue);
    return nuecad;
}

Cadena& Cadena::operator+=(const Cadena& objcade)
{
    if(strlen(cad)>strlen(objcade.cad)+strlen(cad))
    {
        strcat(cad,objcade.cad);
        return *this;
    }
    char *cadelim=cad;
    cad=new char[strlen(cadelim)+strlen(cad)+1];
    if(!cad)
    {
        cerr<<"\nError al reservar memoria"<<endl;
        return *this;
    }
    strcpy(cad,cadelim);
    delete [] cadelim;
    strcat(cad,objcade.cad);
    return *this;
}

