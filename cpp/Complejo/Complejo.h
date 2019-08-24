#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

//#define DEPURAR

using namespace std; //Explicar

class Complejo
{
    private:
        float _imag;
        float _real;
    public:
        // Constructores
        //Complejo();
        //Complejo(float, float);

        //Complejo(float = 0, float);     // Aclarar que esto no funciona
        Complejo(float = 0, float = 0); // Mostrar parametros por defecto
        Complejo(const Complejo &);

        // Destructor
        ~Complejo(); // Solo para la explicacion

        // Metodos publicas
        float getReal(void) const;
        void setReal(float);

        void mostrarValores();

        // Operadores
        Complejo &operator=(const Complejo &);
        Complejo operator+(const Complejo &) const;

        Complejo &operator+=(const Complejo &);
        Complejo operator+(const float &) const;

        Complejo &operator++();
        Complejo operator++(int);


        friend Complejo operator+(const float &, const Complejo &);
        friend ostream & operator<<(ostream &salida, const Complejo &);
        friend istream & operator>>(istream &entrada, Complejo &);

    // protected: // Despues

};

#endif // COMPLEJO_H
















///el codigo anterior no funciona!














