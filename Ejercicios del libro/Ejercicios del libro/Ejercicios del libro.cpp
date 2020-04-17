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
   //char str1[v];
   // char str2[w];  
    //char str3[x];
    //char str4[y];
    //char str5[z];

    //char terminos;
    //terminos = str1 + str2 + str3 + str4 + str5;

    //std::cout << "Terminos: " << terminos << std::endl;



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

    std::cout << "Hello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
