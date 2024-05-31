#include <iostream>
#include <string>

#include "operadores.hpp"

using namespace std;

int main(){

    float resultado = 0;
    int operador = 0;
    float a,b;

    cout<<"ingrese un valor: ";
    cin>>a;

    cout<<"ingrese un operador: "<<endl<<
        "1 para sumar"<<endl<<
        "2 para restar"<<endl<<
        "3 para multiplicar"<<endl<<
        "4 para dividir"<<endl;
    cin>>operador;

    cout<<"Ingrese segundo valor: ";
    cin>>b;

    switch (operador){
        case 1: resultado = suma(a, b);
            break;
        case 2: resultado = resta(a, b);
            break;
        case 3: resultado = multiplicacion(a, b);
            break;
        case 4: resultado = division(a, b);
            break;
        default: cout<<"no seas croto";
    }

    if (operador == 4)
    {
    cout<<"El resultado es "<<resultado<<endl;
        //<<"El resto es "<<(a % b);
    
    } else if (operador == 1 || operador == 2 || operador == 3) {
        cout<<"El resultado es "<<resultado<<endl;
    }

    system("pause");


    return 0;
}