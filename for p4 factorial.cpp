//Marco Alexis Gonzalez Mejia
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,factorial;
	cout<<"Dime un numero para calcular el factorial: ";
	cin>>factorial;
	cout<<factorial;
	for (x=factorial-1;x>=1;x--){
		cout<<"X"<<x;
		factorial=factorial*x;
	}
	cout<<"="<<factorial;
	return 0;
}