#include <iostream>
#include <stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&pila, int &n,int m);
void sacarPila2(Nodo *&pila, int &n);
int main(void){
	Nodo *pila = NULL;
	int n1,n2,i;
	int a[n2-1];
	int k=0;
	int u;
	cout<<"Digite el numero de datos que desea:"<<endl;
	cin>>n2;
	for(i=0;i<n2;i++){
	cout<<"Ingrese dato:";
	cin>>n1;
	agregarPila(pila,n1);
	a[i]=n1;
	}
	cout<<"Sacando datos de la pila para volverlos a meter luego:"<<endl;
	for(i=0;i<n2;i++){
		sacarPila2(pila,n1);
		
	}
	for(i=n2;i>-1;i--){
		while(i=n2){cout<<"El ultimo valor es:"<<a[i]<<endl;}
		agregarPila(pila,a[i]);
		}
	
	


for(i=0;i<n2;i++){

	sacarPila(pila,n1,k);
}



return 0;
}
void agregarPila(Nodo *&pila, int n) {
	Nodo *nuevo_nodo =	new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila= nuevo_nodo;
	cout<<"\nNumero registrado exitosamente\n";}
void sacarPila(Nodo *&pila, int &n,int m){
	Nodo *aux=pila;
	n= aux->dato;
	m=n;
	pila= aux->siguiente;
	delete aux;
	if(pila=NULL){cout<<m;}
	}
void sacarPila2(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n= aux->dato;
	pila= aux->siguiente;
	delete aux;

	}
	




