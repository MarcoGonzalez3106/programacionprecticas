//Marco Alexis Gonzalez Mejia
#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
int main()
{
		SetConsoleOutputCP(CP_UTF8);
		SetConsoleCP(CP_UTF8);
		//Marco Alexis González Mejía
		float a, b, c, s, base, altura, areah, area;
		cout<<"Dime el valor del primer lado del tringulo a: ";
		cin>>a;
		cout<<"Dime el valor del segundo lado del tringulo b: ";
		cin>>b;
		cout<<"Dime el valor del tercer lado del tringulo de c: ";
		cin>>c;
		cout<<"Dime el valor de la base: ";
		cin>>base;
		cout<<"Dime el valor de la altura: ";
		cin>>altura;
		s=(a+b+c)/2;
		areah=sqrt(s*(s-a)*(s-b)*(s-c));
		area=(base*altura)/2;
		cout<<"El valor de el área usando el metodo Herón es: "<<areah<<"\n";
		cout<<"El valor del área usando el metodo b*h/2 es: "<<area;
		return 0;
	}
		
		
		