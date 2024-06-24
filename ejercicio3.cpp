//Ejercicio 3: calcular la suma s=i! /2i para i desde 1 hasta n
#include <iostream>
using namespace std;

double suma (int a);
double factorial (int b);

int main (){
	int n;
	double sum;
	cout<<"Ingrese n: "; cin>>n;
	sum = suma(n);
	cout<<"La sumatoria es "<<sum<<".";
	
	return 0;
}

double suma (int a){
	double s;
	int i;
	s=0;
	for (i=1; i<=a; i++){
		s=s + factorial(i) /(2*i);
	}
	return s;
}

double factorial (int b){
	double f, i;
	f=1;
	for (i=2; i<=b; i++){
		f=f*i;
	}
	return f;
}
