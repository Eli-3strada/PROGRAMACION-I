//declaramos la libreria
#include <iostream>
//declaramos el espacio de nombre
using namespace std;
//declaramos la funcion principal
int main()

{
  //declaramos dos contadores uno para mostrar los numeros impares y otro para contar el total de estos
  int contador,contador1,suma;
  
  //inicializamos el contador en 0
  contador1=0;
  cout << "Estos son los números impares entre 0 y 100 \n";
  
 //Este contador permite moverme de impar a impar 
 for(contador=1; contador<100; contador+= 2)
 {
  // Este otro contador cuenta el número de impares
  contador1++;          
  
 cout << contador<<endl; 
 }
 
 //hacemos la suma de todos los numeros impares
 suma=(contador1*contador1);

//mostramos los resultados
 cout << "El numero de impares entre 0 y 100 es: " << contador1 << endl;
 cout<<"La suma de todos los numeros impares que hay entre 1 y 100 son: "<<suma<<endl;
 
 return 0;
}