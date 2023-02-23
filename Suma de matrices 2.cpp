/*Realice un programa en C++ que le permita a un usuario ingresar 
el tamaño de las matrices, ingresar los valores de las matrices y 
por ultimo sumar las dos matrices*/

#include <iostream>

using namespace std;

int main(){
	cout<<"Programa para sumar dos matrices"<<endl;
	int f,c;
	cout<<"Por favor, ingrese el numero de filas: "<<endl;
	cin>>f;
	cout <<"Por favor, ingrese el numero de columnas: "<<endl;
	cin>> c;
	/*Se declararon tres matrices A y B son las principales y D 
	donde vamos a almacenar el total A+B=D*/
	int A[f][c],B[f][c],D[f][c];
	//Esto nos sirve para llenar los valores de la matriz A
	cout<<"Por favor, ingrese los valores de la matriz A: "<<endl;
	for(int i=0; i<f; i++){
		
		for(int j=0; j<c; j++){
			cout<<"["<< i <<"]["<< j <<"]  =  ";
			cin>>A[i][j];	
		}	
		cout<<"\n";
	}
	//Esto nos sirve para llenar los valores de la matriz B
	cout<<"Por favor, ingrese los valores de la matriz B: "<<endl;
	for(int i=0; i<f; i++){
		
		for(int j=0; j<c; j++){
			cout<<"["<< i <<"]["<< j <<"]  =  " ;
			cin>> B[i][j];
			
		}
		cout<<"\n";
	}
	//Operacion para hacer la suma de matrices
		for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			 D[i][j] = A[i][j] + B[i][j];
		}
		}
		
	cout<<"La suma de las matrices A y B es: "<<endl;
		for(int i=0; i<f; i++){
		
		for(int j=0; j<c; j++){
			cout<<"["<< i <<"]["<< j <<"]  =  "<<D[i][j]<< "\t";
		}	
	}
	return 0;
}