//Marco Alexis González Mejía
#include<iostream>
#include<windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y;
	float z;
	for(x=1;x<11;x++)
	{
		cout<<x<<" , ";
	}
	cout<<"\n";
	system("pause");
	
	for(x=100;x!=65;x-=5)
	{
		z=sqrt(x);
		cout<<"la raiz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	system("pause");
	x=10;
	for(y=10;y!=x;y++)
	{
		cout<<y<<" Dentro del ciclo (nunca entra)\n";
	}
	cout<<y<<" Fuera del ciclo\n";
	system("pause");
	for(x=0,y=0;x+y<10;++x)
	{
		cout<<"Dame el valor de y: ";
		cin>>y;
		cout<<x<<"+"<<x+y<<" El ciclo continua mientras la suma sea <10\n";
	}
	cout<<x<<"+"<<y<<"="<<x+y<<"Fuera del ciclo\n";
	for(x=0;x!=123;)
	{
		cout<<"Dame el valor de x, 123 para terminar el ciclo ";
		cin>>x;
	}
	system("pause");
	x=1;
	for(;x<=10;)
	{
		printf("%d\n",x);
		++x;
	}
	system("pause");
//	for(;;)
//		printf("nunca termina\n");
	cout<<"Hola mundo\n";
	for(x=0;x<1999900000;x++);
	cout<<"hola mundo despues de unos cuantos segundos";
	return 0;
}