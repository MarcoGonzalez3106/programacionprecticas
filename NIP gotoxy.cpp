//Marco Alexis Gonzalez Mejia
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
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
		gotoxy(10,11);
		printf("**Correcto**\n");
	}
	else
	{
		gotoxy(36,9);
		printf("**Incorrecto**");
	}
	if(intento>nip){
		gotoxy(10,11);
		printf("demasiado alto");
	}
	else{
		gotoxy(36,9);
		printf("demasiado bajo");
	}
	return 0;
}
			