//Marco Alexis Gonzalez Mejia
#include<iostream>
#include<windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, tabla, y;
	cout<<"Dime el numero limite: ";
	cin>>y;
	tabla=0;
	for(x=1;x<y;x++)
	{
		cout<<tabla+x<<"\n";
	}
	return 0;
}