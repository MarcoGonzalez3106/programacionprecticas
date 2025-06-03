#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
struct Persona{
	string nombre;
	int edad;
	float altura;
};
int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	//Declaracion de una variable de tipo 'Persona'
	Persona persona1;
	//Entrada de datos
	cout<<"Ingrese el nombre: ";
	getline(cin, persona1.nombre);//cin>>persona1.nombre;
	cout<<"Ingrese la edad: ";
	cin>>persona1.edad;
	cout<<"Ingrese la altura (en metros): ";
	cin>>persona1.altura;
	//salida de datos
	cout<<"\nDatos de la persona: \n";
	cout<<"Nombre: "<<persona1.nombre<<"\n";
	cout<<"Edad: "<<persona1.edad<<" años"<<endl;
	cout<<"Altura: "<<persona1.altura<<" m"<<endl;
	return 0;
}