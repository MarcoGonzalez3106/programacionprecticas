//matriz
#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int matriz[10][10];//declara una matriz
	int i,j,n;
	srand(time(0));//Inicializa la semilla de numeros aleatorios
	do{
		cout<<"Dime cuantos elementos por lado tiene la matriz? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)//ciclo para renglones
		for(j=0;j<n;j++)
			matriz[i][j]=rand()%100;//Genera numeros aleatorios entre 0 y 99
			cout<<"Impresion de matriz\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d",matriz[i][j]);
		}
		cout<<"\n";
	}
	cout<<"Impresion de la diagonal\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				printf("%3d",matriz[i][j]);
			else
				printf("   ");	
		}
		cout<<"\n";
	}
	return 0;
}
	
	