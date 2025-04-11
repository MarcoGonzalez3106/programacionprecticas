//Marco Alexis Gonzalez Mejia
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int entera;
    float flotante;
    char letra, palabra[50]; 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "Lectura de datos usando scanf\n";
    cout << "Dame un valor entero: ";
    fflush(stdin);
    scanf("%d", &entera);
    cout << "Dame un valor flotante: ";
    fflush(stdin);
    scanf("%f", &flotante);
    cout << "Dame un valor char: ";
    fflush(stdin);
    scanf("%c", &letra);
    cout << "Dame una cadena sin espacios: ";
    fflush(stdin);
    scanf("%s", palabra); 
    puts("Impresion de los valores\n");
    cout << entera << "\n";
    cout << flotante << "\n";
    putchar(letra);
    putchar('\n');
    puts(palabra);
    system("pause");
    cout << "Dame un entero, un flotante, un char y una cadena sin espacios: ";
    fflush(stdin);
    scanf("%d %f %c %s", &entera, &flotante, &letra, palabra); 
    puts("Impresión de los valores\n");
    cout << entera << "\n";
    cout << flotante << "\n";
    putchar(letra);
    putchar('\n');
    puts(palabra);
    puts("\n");
    cout << fixed; 
    cout.precision(4);
    cout << "Impresión con precisión.\n El valor flotante a 4 decimales: " << flotante << "\n";
    cout.precision(2);
    cout << "Con 2 decimales: " << flotante << endl; 
    cout.precision(6);
    cout << "Con 6 decimales: " << flotante << endl; 
    cout.unsetf(ios::fixed); 
    cout << "Sin formato fijo: " << flotante << endl; 
}