//Marco Alexis González Mejía
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int d,m,a;
	cout<<"Dame una fecha en este formato ddmmaaaa: ";
	scanf("%2d%2d%4d",&d,&m,&a);
	switch(m)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			printf("Primer cuatrimestre");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			printf("Segundo cuatrimestre");
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			printf("Tercer cuatrimestre");
			break;
		default:
			printf("Mes no valido");
	}
	cout<<" de "<<a;
	return 0;
}
	