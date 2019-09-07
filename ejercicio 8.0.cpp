#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	//ejercicio 8


void Recursiva(int x, int y); 
int main(void){
    int  c;
    int cont=0;
    cout<<"Ingrese un valor: ";
    cin>>c;
    
    Recursiva(c , cont);

}
    
void Recursiva(int x, int y){
    y++;
    if(x==y){
        cout<<y;
   }
    else{cout<<y;
    Recursiva(x,y);
    cout<<y;
    }
}


 



	

