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
			cout<<"El resultado es "<<r;
		break;
		case '-':
			r=op1-op2;
			cout<<"El resultado es "<<r;
		break;
		case '*':
			r=op1*op2;
			cout<<"El resultado es "<<r;
		break;
		case '/':
			if (op2==0)
				cout<<"Segundo numero invalido.";
			else{
				r=op1/op2;
				cout<<"El resultado es "<<r;
			}
		break;
		default:
		cout<<"Operador no valido.";
		break;
	}
	return 0;
}