//Declaramos librerias
#include<iostream>
#include<conio.h>
//declaramos el espacio de nombre
using namespace std;

//declaramos la funcion principal
int main()
{
//definimo la variable cont para que este cuente los numeros impares
//definimos un array para que almacene los numeros
int cont;
int num[100];
//inicializamos nuestro contador
cont=1;
 //mostramos un mensaje al usuario indicandole el resultado
 cout<<"Los numeros Impares entre 1 y 100 son: "<<endl<<endl;
 //declaramos un for para que este de los numeros del 1 al 100
 for(int i=1; i<100; i++)
 {
//declaramos un if anidado para buscar los valores impares
 	if(i%2 != 0)
 	{ 
 	num[cont]=i;
 	cont++;
	 }
 }
 //declaramos otro for para que desde contador nos muestre los numeros impares entre 1 y 100
 for(int i=0; i<cont; i++)
 {
 	cout<<num[i]<<endl;
 }
	
	return 0;
}


