#include <iostream>
//Importante! el programa guarda los Datos en la lista  pero crashea al comenzar a ingresar los datos desde la lista hacia el arbol, 
//trate de remediarlo con un cin pero no funciono
using namespace std;
int cont=0;
struct nodoss{
    int dato;
    nodoss *sig;
};
struct nodo{
    int dato;
    nodo *hijoIzq;
    nodo *hijoDer;
};

class ABB{
private:
    nodo *pArbol;
public:
    ABB(void);
    void operaciones(int rap);
  
    void insNodo(int);
    void insNodo(nodo **, int);

};

ABB::ABB(void){
    pArbol = NULL;
}




void ABB::insNodo(int dato){
    
    insNodo(&pArbol, dato);
}

void ABB::insNodo(nodo **p, int dato)
{
    if(!(*p)){
       
        *p = new nodo;
        (*p)->dato = dato;
        (*p)->hijoIzq = (*p)->hijoDer = NULL;
    }
    else
        if(dato < (*p)->dato){
            
            insNodo(&((*p)->hijoIzq), dato);
        }
        else
            if(dato > (*p)->dato){
                
                insNodo(&((*p)->hijoDer), dato);
            }
            else
                cout << "El nodo ya existe\n";
}









void ABB::operaciones(int rap)
{
    char resp;
    int dato;
    
    
    
    dato=rap;
       
       insNodo(dato);
        cout<<"Dato ingresado en el arbol";
    }    
     ABB miArbol;
  
    


class ListaSimple{
private:
    nodoss *pInicio;

public:
    ListaSimple(void);
    void operacion(void);
    void insAntes(int, int);
    void insertarInicioLista(int);
    void mostrarLista(void);
    void insFinal(int);
  
  
};

ListaSimple::ListaSimple(void) {
    pInicio = NULL;
}




void ListaSimple::insAntes(int dato, int datoRef) {
    nodoss *nuevo, *p, *q;

    nuevo = new nodoss;
    nuevo->dato = dato;

    p = pInicio;
    q = NULL;
    while (p != NULL && p->dato != datoRef) {
        q = p;
        p = p->sig;
    }
    if (q == NULL) {
        if (p == NULL) {
            cout << "Insertaste el primero" << endl;
            pInicio = nuevo;
            pInicio->sig = NULL;
        } else {
            cout << "Dato de referencia esta al principio" << endl;
            pInicio = nuevo;
            pInicio->sig = p;
        }
    } else {
        if (p == NULL) {
            cout << "Dato de referencia no encontrado" << endl;
            q->sig = nuevo;
            nuevo->sig = NULL;
        } else {
            cout << "Dato insertado a mitad de la lista" << endl;
            q->sig = nuevo;
            nuevo->sig = p;
        }
    }
}

void ListaSimple::insertarInicioLista(int dato) {
    nodoss *nuevo;

    nuevo = new nodoss;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaSimple::mostrarLista(void) {
    nodoss *s = pInicio;
    int l;

    cout << "Los elementos de la lista son:" << endl;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
      miArbol.operaciones(s->dato);
       cout<<"Ingrese 1 para continuar:";
       cin>>l;
    }
}



void ListaSimple::insFinal(int dato) {
    nodoss *p, *q;

    nodoss *nuevo = new nodoss;
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        p = pInicio;
        q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void ListaSimple::operacion(void)
{
    char resp;
    int dato, datoRef, datoBuscar;

    cout << "Desea meter un dato (s/n)?";
    cin>> resp;
    while(resp == 's'){
        cout << "Digite el dato: ";
        cin >> dato;
        cout << "Antes de cual vas a insertarlo? ";
        cin >> datoRef;
        insAntes(dato, datoRef); //insertarInicioLista(dato);
        cout << "Desea meter un dato (s/n)?";
        cin>> resp;
    }

    
   
   

    

  
   
    
}

int main(void)
{
    ListaSimple miLista;
    miLista.operacion();
    miLista.mostrarLista();
  
    

    return 0;
}


