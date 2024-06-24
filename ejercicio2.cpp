//Ejercicio 2: determinar si dos numeros son PESI
#include <iostream>
using namespace std;
int main (){
	int a, b, i, c;
	cout<<"Determinar si dos numeros son PESI"<<endl;
	cout<<"Ingrese primer numero: ";cin>>a;
	cout<<"Ingrese segundo numero: ";cin>>b;
	c=0;
	i=1;
	if (a==b)
		cout<<"No pueden ser numeros iguales.";
	else {	
		while ((i<=a) && (i<=b)){
			if ((a%i==0) && (b%i==0)){
				c=c+1;
			}
			i=i+1;
		}
		if (c>1)
			cout<<"No son PESI.";
		else
			cout<<"Son PESI.";
	}
	return 0;
}