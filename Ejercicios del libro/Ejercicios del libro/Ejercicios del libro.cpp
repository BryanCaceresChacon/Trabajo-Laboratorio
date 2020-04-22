// Ejercicios del libro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    //EJERCICIO 2.15
    int x;
    x = 3 + 3 * 4 / 2 - 2;
    std::cout << "El resultado de x1 es : " << x << std::endl;

    x = 4 % 2 + 2 * 4 - 2 / 2;
    std::cout << "El resultado de x2 es : " << x << std::endl;

    x = (2 * 4 * 2 + (9 * 3 / 3));
    std::cout << "El resultado de x3 es : " << x << std::endl;

    //EJERCICIO 2.16
    int q;
    int w;
    int suma;
    int resta;
    int cociente;

    std::cout << "Ingrese un numero por favor : ";
    std::cin >> q;
    std::cout << "Ingrese otro numero por favor : ";
    std::cin >> w;
    suma = q + w;
    resta = q - w;
    cociente = q / w;
    std::cout << "El resultado de la suma es : " << suma << std::endl;
    std::cout << "El resultado de la resta es : " << resta << std::endl;
    std::cout << "El cociente de su division es : " << cociente << std::endl;

    //EJERCICIO 2.17
 
    char a[] = "v x y z";
    char b = 'v';
    char c = 'x';
    char d = 'y';
    char e = 'z';
    //utilizando una insteruccion con un operador de insercion de flujos 
    std::cout << a <<std :: endl;
    //utilizando una insteruccion con cuatro operadores de insercion de flujos 
    std::cout << b << "\t" << c << "\t" << d << "\t" << e << std::endl;
    //utilizando cuatro instrucciones
    std::cout << b<<c<<d<<e << std::endl;
   
    

   //EJERCICIO 2.18
    int r;
    int t;

    std::cout << "Ingrese un numero por favor : ";
    std::cin >> r;
    std::cout << "Ingrese otro numero por favor : ";
    std::cin >> t;




    if (r > t)
    {
        std::cout << r << " es el mayor" << std::endl;
    }
    else if (t > r)
    {
        std::cout << t << " es el mayor" << std::endl;
    }
    else if (t == r)
    {
        std::cout << t << "y" << r << " estos numeros son iguales" << std::endl;
    }

    //EJERCICIO 2.19
    int g;
    int h;
    int k;
    int promedio;
    int producto;



    std::cout << "Ingrese 3 numeros: ";

    std::cin >> g;
    std::cin >> h;
    std::cin >> k;





    suma = g + k + h;
    promedio = (g + h + k) / 3;
    producto = g * h * k;

    std::cout << "La suma es : " << suma << std::endl;
    std::cout << "El promedio es: " << promedio << std::endl;
    std::cout << "El producto es: " << producto << std::endl;

    if (g > h && g > k)
    {
        std::cout << g << " es el numero mas grande " << std::endl;
    }
    else if (h > g && h > k)
    {
        std::cout << h << " es el numero mas grande" << std::endl;
    }
    else if (k > g && k > h)
    {
        std::cout << k << " es el numero mas grande" << std::endl;
    }
    if (g < h && g < k)
    {
        std::cout << g << " es el numero mas pequeño " << std::endl;
    }
    else if (h < g && h < k)
    {
        std::cout << h << " es el numero mas pequeño" << std::endl;
    }
    else if (k < g && k < h)
    {
        std::cout << k << " es el numero mas pequeño" << std::endl;
    }

    

    //EJERCICIO 2.27

    using namespace std;

    char o;

    cout << "Ingrese un caracter: ";
    cin >> o;
    cout << "Su caracter en valor entero es: " << static_cast<int>(o)<<endl;
    
    //EJERCICIO 2.28
    int num = 0;
    int numinv = 0;
    int rest = 0;

    cout << "ingrese un numero: ";
    cin >> num;

    while (num > 0) {
        rest = num % 10;
        num = num / 10;
        numinv = numinv * 10 + rest;
    }
    cout << "El numero invertido es: " << numinv << endl;

    //EJERCICIO 2.29

    int longi;
    cout << "Longitud de la cara del cubo:";
    cin >> longi;
    cout << "el area del cubo es: " << (longi * longi) * 6 << endl;
    cout << "el volumen del cubo es: " << (longi * longi * longi);


    

}

