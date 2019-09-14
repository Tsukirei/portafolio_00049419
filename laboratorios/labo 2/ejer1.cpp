#include <iostream>

using namespace std;
void recursionmenor(int m, int n);

int main(void) {
    int mayor;
    int menor;
        
    cout<<">Ingrese el valor mayor:";
    cin>>mayor;
    cout<<"Ingrese el valor menor:";
    cin>>menor; 
    
    recursionmenor(mayor,menor);
    
   

   
    
    
    
    

    return 0;
} 

void recursionmenor(int m, int n){
    int  r;
    
    r=m%n;
    
    if(m%n==0){
        
        cout<<"El mcd es:"<<n;
    }
    
    else{ m=n;
    n=r;
    
  recursionmenor( m, n);
 
 
    
    
    }
}
