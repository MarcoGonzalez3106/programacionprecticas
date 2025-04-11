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
	long int i=0;
	long int j=1;
	long int y;
	int ren,col;
	ren=3;
	col=0;
	char c;
	system("CLS");
	cout<<i<<"\n";
	cout<<j<<"\n";
	y=0;
	do{
		y=i+j;
		cout<<y<<"\n";
		i=j;j=y;
	cout<<"Presiona c pra continuar generando, t para terminar";
	cin>>c;
	}
	while(c!='t');
	return 0;
}
	

