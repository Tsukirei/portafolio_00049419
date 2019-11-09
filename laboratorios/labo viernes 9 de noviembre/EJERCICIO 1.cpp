//ejercicio numero 1
#include <iostream>
#include <cmath>


using namespace std;
int nodt=0;
int nods=0;
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}


void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){

    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    

    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
   
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}


void preorden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        nodt++;
        nods=nods+a->info;
        preorden(a->izq);
        
        preorden(a->der);
    }
}




void recorrerArbol(Arbol a){
    cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
   }

int main(){
    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
    
    Arbol arbol = crearArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Mostrar datos del arbol:"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: recorrerArbol(arbol);
            cout<<"\nnodos que tiene el arbol en total:"<<nodt<<endl;
            cout<<"\nsuma de todos los nodos:"<<nods<<endl;
            nodt=0;
            nods=0;
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}
