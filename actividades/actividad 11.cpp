#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);

int main(
void){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	cout<<"\nDigite un numero:";
	cin>>dato;
	insertarCola(frente,fin,dato);

	cout<<"\nDigite un numero:";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
		cout<<"\nDigite un numero:";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
		cout<<"\nDigite un numero:";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	getch( );
	return 0;
}
void insertarCola(Nodo *&frente,Nodo *&fin,int n){
Nodo *nuevo_nodo = new Nodo();

nuevo_nodo -> dato = n;
nuevo_nodo -> siguiente = fin;	

if(cola_vacia(frente))
{frente = nuevo_nodo;
}
else{
	fin -> siguiente = nuevo_nodo;
}
fin=nuevo_nodo;
cout << "dato ingresado correctamente";
}

bool cola_vacia(Nodo *frente){
	
	if(frente == NULL){
		return true;
	}
	else{return false;
	}
}
