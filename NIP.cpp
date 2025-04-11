//Marco Alexis Gonzalez Mejia
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;
	int intento=0;
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip)
	{
		printf("**Correcto**\n");
		printf("Es tu nip");
	}
	else
	{
		printf("**Incorrecto**");
		if(intento>nip)
		{
			printf("Demasiado alto");
		}
		else
		{
			printf("Demasiado bajo");
		}
	}
	return 0;
}