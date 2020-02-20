#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include <string.h>
#include <fstream>
#include "header.h"

using namespace std;

class Cadena
{
    private:
        char* _cad;
    public:
        Cadena(const char* = NULL);
        Cadena(const Cadena&);

        Cadena& operator=(const char*);
        Cadena& operator=(const Cadena &obj)
        Cadena& operator+(const char*);
        Cadena& operator+(const Cadena &obj);

        friend ostream&operator<<(ostream&,const Cadena&);
};
#endif // FUNCIONES_H_INCLUDED
