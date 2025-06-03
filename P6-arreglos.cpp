#include <iostream>//#include<stdio.h>
using namespace std;
int main()
{
	int r,y[5],x[ ]={50,30,-1,0,-32768};
	int i=0;
	r=i;//dos variables si se puede
	//y=x; dos arreglos no se puede
	cout<<"Impresion de los arreglos antes de la asignacion de uno a otro\n";
	for(i=0;i<5;i++)
		cout<<"x["<<i<<"]="<<x[i]<<"        y["<<i<<"]="<<y[i]<<"\n";
	cout<<"Asignacion de los valores de x en y, espere un momento\n";
	for(i=0;i<5;i++)
		y[i]=x[i];//elemento por elemento si se puede
	cout<<"Impresion de los arreglos despues de la asignacion\n";
	for(i=0;i<5;i++)
	cout<<"x["<<i<<"]="<<x[i]<<"        y["<<i<<"]="<<y[i]<<"\n";
	return 0;
}