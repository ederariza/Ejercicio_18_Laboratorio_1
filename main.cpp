/*
Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto
*/

#include <iostream>
using namespace std;

int main(){

    int numero_ingresado;
    cout << "Ingrese el numero: ";
    cin >> numero_ingresado;

    for(int i=0; i<=numero_ingresado; i++) {

        if((i >0) && (i * i == numero_ingresado)) {
            cout << "El numero " << numero_ingresado << " es un cuadrado perfecto" << endl;
            break;
        }

        else{

            if(i == numero_ingresado){
                cout << "El numero " << numero_ingresado << " no es un cuadrado perfecto" << endl;
            }

            else{
                continue;
            }

        }

    }


    return 0;
}
