//Ejercicio 3: calcular la suma s=i! /2i para i desde 1 hasta n
#include <iostream>
using namespace std;

double suma (int a);

int main (){
	int n;
	double sum;
	cout<<"Ingrese n: "; cin>>n;
	sum = suma(n);
	cout<<"La sumatoria es "<<n<<".";
	
	return 0;
}

double suma (int a){
	double s, i;
	s=0;
	for (i=1; i<=a; i++){
		s=s + (factorial(i) /2*i);
	}
	return s;
}