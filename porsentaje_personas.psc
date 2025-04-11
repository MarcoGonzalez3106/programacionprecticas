Proceso porsentaje_personas 
	Definir cuantos,h,m Como Entero;
	Definir pcth, pctm Como Real;
	Escribir "Cuantas personas existen: ";
	Leer cuantos;
	Escribir "cuantos hombres son; ";
	Leer h;
	Escribir "cuantas mujeres son: ";
	Leer m;
	pcth<- h*100/cuantos;
	pctm<- m*100/cuantos;
	Escribir "el porcentaje de hombres es: ",pcth;
	Escribir "el porcentaje de mujeres es: ",pctm;
	Escribir "Suma de porcentajes: ",pcth+pctm;
FinProceso
