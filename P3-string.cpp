//Es importante tener en cuenta que las cadenas de caracteres en c son arreglos de caracteres terminados en un caracter nulo('\0'), mientras que los objetos string en C++ manejan internamente la longitud de la cadena y no requieren un caracter nulo explicito. Por lo tanto, si usas string en Dev-C++, no necesitas preocuparte por añadir el caracter nulo al final de la cadena.
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x;
	string micadena = "Hola mundo";
	cout<<"la cadena original es: "<< micadena<<endl;
	char letra1 = micadena[0];//Acceder al primer caracter de la cadena
	cout<<"La cadena modificada es: "<<micadena<<endl;
	for(x=0;x<micadena.length();x++)
		cout<<micadena[x]<<"\n";
}