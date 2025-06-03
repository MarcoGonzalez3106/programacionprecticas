#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char cadena[15];
	int len, i;
	cout<<"Dame una palabra en minusculas: ";
	gets(cadena);
	len=strlen(cadena);//obtiene la longitud de la cadena
	for(i=0;i<len;i++)
		cadena[i]=toupper(cadena[i]);//convierte a mayusculas cada elemento
	cout<<"Impresion de la cadena completa: "<<cadena<<"\n";
	cout<<"Impresion elemento por elemento\n";
	for(int i=0;i<len;i++)
		cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
		return 0;
}