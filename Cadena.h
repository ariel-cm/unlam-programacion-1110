#ifndef CADENA_H
#define CADENA_H
#include <string.h>
#include <iostream>
using namespace std;

class Cadena
{
    private:
        char *cad;

    public:
        Cadena();
        Cadena(const char*);
        Cadena(const Cadena&);
        ~Cadena();

        Cadena operator+(const char*)const;
        Cadena operator+(const Cadena&)const;
        Cadena& operator=(const Cadena&);
        Cadena& operator+=(const Cadena&);

        friend Cadena operator+(const char*,const Cadena&);
        friend ostream& operator<<(ostream&,const Cadena&);
        friend istream& operator >>(istream&,Cadena&);
};


#endif // CADENA_H
