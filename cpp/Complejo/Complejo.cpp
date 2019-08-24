#include "Complejo.h"


/***
Complejo::Complejo()
{
    _real = 0;
    _imag = 0;
}
*/

/**
Complejo::Complejo(float _real, float _imag)
{
    this->_real = _real;
    this-> _imag = _imag;
}
*/

Complejo::Complejo(float re, float im)
    : _real(re), _imag(im) //inicializadores
{
#ifdef DEPURAR
    cout << "-----Constructor con parametros por defecto" << endl;
#endif // DEPURAR
}

Complejo::Complejo(const Complejo &obj)
{
    _real = obj._real;
    _imag = obj._imag;
#ifdef DEPURAR
    cout << "-----Constructor de copia" << endl;
#endif // DEPURAR
}

Complejo::~Complejo()
{
#ifdef DEPURAR
    cout << "-----Destructor" << endl;
#endif // DEPURAR
}

float Complejo::getReal(void) const
{
    return _real;
}

void Complejo::setReal(float _real)
{
    _real = _real;

    // analisis
    //this->_real = _real;
}

void Complejo::mostrarValores()
{
    cout << "(" << _real << ", " << _imag << ")" << endl;
}

Complejo& Complejo::operator=(const Complejo &obj)
{
    _real = obj._real;
    _imag = obj._imag;
    return *this;
}







Complejo Complejo::operator+(
         const Complejo &obj) const
{
    Complejo aux(this->_real + obj._real,
                 this->_imag + obj._imag);
    return aux;
}











Complejo& Complejo::operator+=(
          const Complejo &obj)
{
    _real += obj._real;
    _imag += obj._imag;
    return *this;
}









Complejo Complejo::operator+
         (const float &f) const
{
    Complejo aux(*this);
    aux._real += f;
    return aux;
}









ostream & operator<<(
                    ostream &salida,
                    const Complejo &obj)
{
    salida << "("
           << obj._real
           << ";"
           << obj._imag
           << ")";

    return salida;
}












istream & operator>>(
                     istream &entrada,
                     Complejo &obj)
{
    cout << "Ingrese parte real: "; // Solo para ejemplo
    entrada >> obj._real;
    cout << "Ingrese parte imaginaria: ";// Solo para ejemplo
    entrada >> obj._imag;

    return entrada;
}










Complejo operator+(
         const float &f,
         const Complejo &obj)
{
    Complejo aux(obj._real + f, obj._imag);
    return aux;
}











Complejo & Complejo::operator++()
{
    this->_real++;
    return *this;
}

Complejo Complejo::operator++(int)
{
    Complejo aux(*this);
    //Complejo aux(this->_rea, this->_imag);
    this->_real++;
    return aux;
}

