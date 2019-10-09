#include <iostream>
#include <string>
using namespace std;
struct orden{
	int revueltas;
	int fyq;
	int q;
	bool rice;
};

typedef struct orden prim;

prim solicitarorden(){
	prim p;
	cout<<"Revueltas:"; cin>>p.revueltas;
	cout<<"Frijol con queso:";  cin>>p.fyq;
	cout<<"Queso:"; cin>>p.q;
	cout<<"De arroz?(Ingrese el valor 1 si desea que sean de arroz, o 0 si desea que sean de maiz):"; cin>>p.rice;
	return p;
}

void mostrarorden(prim p){
	cout<<"su orden es:";
	cout<<"\nRevueltas:"<<p.revueltas;
	cout<<"\nFrijol con queso:"<<p.fyq;
	cout<<"\nQueso:"<<p.q;
	cout<<"\nArroz(1:arroz , 0:maiz):"<<p.rice;
	cout<<endl;
}

struct tnodo{
	prim dato;
	struct *sig;
};

typedef struct tnodo nodo;
nodo *pInicio;
