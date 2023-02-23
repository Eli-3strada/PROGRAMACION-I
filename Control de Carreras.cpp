#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char a;
	float numauto, tiempo, tganador, tperdedor, ganador, perdedor;
	
	int i=0;
	cout<<"Bienvenido al control de carreras"<<endl<<endl;
	cout<<"Si deseas saber que auto gano la carrera ingresa los datos a continuacion"<<endl<<endl;
	do
	{
	i++;
	cout<<"Ingresa el numero del auto"<<endl;
	cin>>numauto;
	cout<<"Ingresa el tiempo en minutos de la carrera"<<endl;
	cin>>tiempo;
	
	if(i==1)
	{ 
	ganador=numauto;
	tganador=tiempo;
	perdedor=numauto;
	tperdedor=tiempo;
	}
	
	else
	{
	
	if(tiempo<tganador)
	  {
	  	tganador=tiempo;
	  	ganador=numauto;
	  }
	if(tiempo>= tperdedor)
	   {
	   	tperdedor=tiempo;
	   	perdedor=numauto;
	   }
    }
	cout<<"Desea ingresar los datos de otro auto (s/n)?"<<endl;
	cin>>a;
    }
	
	while((a!='n')&&(a8!='N'));
	{
	
	cout<<"El auto ganador es el numero: "<<ganador<< ", con un tiempo record de: "<<tganador<<endl;
	cout<<"El auto perdedor es el numero: "<<perdedor<< ", con un tiempo de: "<<tperdedor<<endl;
    }
    
    return 0;
}