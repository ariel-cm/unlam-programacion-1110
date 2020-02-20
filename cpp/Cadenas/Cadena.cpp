#include "Cadena.h"

Cadena::Cadena(const char* str) : _cad(duplicar_cadena(str)) {}

Cadena::Cadena(const Cadena &obj) : _cad(duplicar_cadena(obj._cad)) {}

Cadena& Cadena::operator=(const char* aux)
{
    delete [] _cad;
    _cad = duplicar_cadena(aux);
    return *this;
}

Cadena& Cadena::operator=(const Cadena &obj)
{
    delete [] _cad;
    _cad = duplicar_cadena(obj._cad);
    return *this;
}

Cadena Cadena::operator+(const char * str)
{
    try
    {
        char *n = new char[strlen(_cad) + strlen(str) + 1];
        strcpy(n, _cad);
        strcat(n, str);
        return n;
    }
    catch(const std::exception& e) {}
    return NULL;
}

ostream& operator<<(ostream &sal, const Cadena &obj)
{
    sal << "Cadena: " << obj._cad << endl;
    return sal;
}