/*pedir al usuario que ingrese la cantidad numeros al azar
 que sean menores a 100 que el desee ingresar
 el sistema debera finalizar cuando el usuario ingrese un numero
 mayor a 100*/
#include<iostream>

using namespace std;

int main()
{
	int a;
	
	cout<<" Por favor Ingrese un numero menor a 100"<<endl;
	cin>>a;
	
	//creamos nuestra estructura repetitiva while

	while(a<=100)
	{
	cout<<" Por favor Ingrese un numero menor a 100"<<endl;
	cin>>a;	
	}
	return 0;
}
