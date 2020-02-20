#include "header.h"

char* duplicar_cadena(const char* str)
{
    if (str && *str)
    {
        try
        {
            char* aux = new char[strlen(str) + 1];
            strcpy(aux, str);
            return aux;
        }
    catch(const std::exception& e) {}
    }
    return NULL;
}