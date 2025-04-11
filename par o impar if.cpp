//Marco Alexis Gonzalez Mejia
#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Dame un numero para determinar si es par o impar: ",
	cin>>n;
	if(n%2)
	cout<<"El numero es impar\n";
	else
	cout<<"El numero es par\n";
	system("pause");
	if(n%2==0)
	cout<<"El numero es par";
	else
	cout<<"El numero es impar\n";
	return 0;
}
	