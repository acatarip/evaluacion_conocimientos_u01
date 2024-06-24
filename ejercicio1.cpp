//Ejercicio 1: diseñe una calculadora que pida dos numeros y un operador
#include <iostream>
using namespace std;
int main (){
	float op1, op2, r;
	char op;
	cout<<"Ingrese primer numero: "; cin >>op1;
	cout<<"Ingrese segundo numero: "; cin >>op2;
	cout<<"Ingrese operador: "; cin>>op;
	switch (op){
		case '+':
			r=op1+op2;
		break;
		case '-':
			r=op1-op2;
		break;
		case '*':
			r=op1*op2;
		break;
		case '/':
			r=op1/op2;
		break;
	}
	cout<<"El resultado es "<<r;
	return 0;
}