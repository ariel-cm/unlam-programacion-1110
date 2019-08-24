#include <iostream>
#include "Complejo.h"

#include <string.h>     /* Comentar que pasa con esto */
#include <string>       /* y esto                     */

using namespace std;

int main()
{
    int numero;

    // Mostrar por pantalla
    cout << "Ingrese un numero: ";
    // Ingresar por teclado
    cin >> numero;
    if (cin.fail())
    {
        cout << "Falla en cin \n";
        numero =8;
    }
    cout << "El numero ingresado es: " << numero << endl;
    //*
    Complejo a1;
    Complejo c1;
    c1.mostrarValores();
    //*
    Complejo c2(1.1, 2.2);
    c2.mostrarValores();
    //*
    Complejo c3(c2);
    c3.mostrarValores();
    cout << c3.getReal() << endl;
    c3.setReal(4.4);
    cout << c3.getReal() << endl;
    c3.mostrarValores();
    //*
    cout << "C1: ";
    c1.mostrarValores();
    cout << "C2: ";
    c2.mostrarValores();
    cout << "Operador c1 = c2" << endl;
    c1 = c2;
    cout << "C1: ";
    c1.mostrarValores();
    cout << "C2: ";
    c2.mostrarValores();
    //*
    cout << "Operador c3 = c1 + c2" << endl;
    c3 = c1 + c2;
    c3.mostrarValores();
    //*
    cout << "Operador c3 += c2" << endl;
    c3 += c2;
    c3.mostrarValores();
    cout << "c3: " << c3 << endl;
    //*
    cin >> c3;
    cout << "c3: " << c3 << endl;

    //*
    Complejo c4(0,0);
    c4 = 7 + c3;
    cout << "c4: " << c4 << endl;

    Complejo c5(0,0);
    c5 = c4 + 2;
    cout << "c5: " << c5 << endl;


    //*
    Complejo *c6;
    c6 = new Complejo(5,5);
    c6->mostrarValores();
    c6->setReal(7);
    c6->mostrarValores();
    // c6->_imag = 8;
    delete c6;


    Complejo c8(1, 1);
    cout << "c8: " << c8 << endl;
    //++c8;
    cout << "++c8: " << ++c8 << endl;
    //c8++;
    cout << "c8++: " << c8++ << endl;
    cout << "c8: " << c8 << endl;
    // */


    cout << "Fin de main" << endl;
    return 0;
}

