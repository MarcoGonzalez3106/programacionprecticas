//Marco Alexis Gonzalez Mejia
#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
	float numerador, denominador;
	cout<<"Dame el numerador (dividendo): ";
	cin>>numerador;
	cout<<"Dame el denominador (divisor): ";
	cin>>denominador;
	if(denominador)
	cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
	cout<<"La division ente cero no esta permitida\n";
	system("pause");
	if(denominador!=0)
	cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
	cout<<"La division ente cero no esta permitida\n";
	system("pause");
	if(!denominador)
	cout<<"La division ente cero no esta permitida\n";
	else
	cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
}