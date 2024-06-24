//Ejercicio 3: calcular la suma s=i! /2i para i desde 1 hasta n
#include <iostream>
using namespace std;
int main (){
	int n;
	double sum;
	cout<<"Ingrese n: "; cin>>n;
	sum = suma(n);
	cout<<"La sumatoria es "<<n<<".";
	
	return 0;
}