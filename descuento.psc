Proceso sin_titulo
	Definir nombre Como Caracter;
	Definir precio Como Real;
	Definir descuento Como Real;
	Definir total Como Real;
	Escribir "Dime tu nombre: ";
	Leer nombre;
	Escribir "Dime el precio del poducto: ";
	Leer precio;
	descuento<-precio*0.12;
	total<-precio-descuento;
	Escribir "Hola ", Mayusculas(nombre);
	Escribir "El precio total es de: ", total;
	
FinProceso
