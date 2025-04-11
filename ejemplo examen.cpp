//Marco Alexis Gonzalez Mejia
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int i, x;
	do{
		cout<<"Dame un numero para determinar si es primo o no (debe ser mayor que 1)";
		cin>>x;
	}while(x<=1);
	if(x==2)
		cout<<"Si es primo";
	else
		if(x%2==0)
			cout<<"No es primo";
		else{
			for(i=3;x%i!=0;i=i+2)
			cout<<"se determino al dar"<<i<<"vueltas que: "<<x;
			if(i>=x)
				cout<<" Si es primo";
			else
				cout<<" No es primo";
		}
	return 0;
}