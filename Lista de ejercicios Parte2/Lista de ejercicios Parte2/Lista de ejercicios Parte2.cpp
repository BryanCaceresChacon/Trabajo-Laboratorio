// Lista de ejercicios Parte2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    //EJERCICIO 4.26
    int size;
    cout << "Ingrese un valor para la figura: ";
    cin >> size;
    //imprimir lado superior del cuadrado size veces
    for (int i = 0; i < size;i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = 0; i < (size - 2);i++) {
        cout << "*";
        for (int j = 0;j < (size - 2);j++) {
            cout << " ";
        }
        cout << "*" << endl;

    }

    for (int n = 0;n < size;n++) {
        cout << "*";
    }

    cout << endl;
    //EJERCICIO 4.27

    int num = 0;
    int rest = 0;
    int numinv = 0;
    int num2;
    cout << "ingrese un numero: ";
    cin >> num;
    num2 = num;



    while (num > 0) {
        rest = num % 10;
        num = num / 10;
        numinv = numinv * 10 + rest;
    }
    if (num2 == numinv) {
        cout << "es un palindrome";
    }
    else {
        cout << "no es un palindrome";
    }

    cout << endl;
    //EJERCICIO 4.30

    int semilla1;
    int semilla2;
   // USE UN LIMITE COMO EL NUMERO 20 

    for (semilla1 = 0; semilla1 <=20 ;semilla1++) {
        cout << semilla1;
        cout << endl;
        for (semilla2 = 1;semilla2 <=20;semilla2++) {
            cout << semilla2;
            cout << endl;
            semilla1 = semilla2 + semilla1;
            semilla2 = semilla1 - semilla2;
        }
    }

    cout << endl;

    //EJERCICIO 5.12
    int i;
    long resultado = 1;
    for (i = 3;i <= 50;i++) {
        if (i % 3 == 0) {
            resultado *= i;

        }

    }
    cout << "el producto de los multiplos de 3 entre 3 y 50 es:" << resultado;
    return 0;



}

