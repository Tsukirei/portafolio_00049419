#include <iostream>

using namespace std;

int main(void) {
    int i;
    float b=0, c;
    int r[10];
    
    
      cout<<"Ingrese los valores que desea"<<endl;
      
    for(i=0; i<10 ;i++){
       
        cout<<"Ingrese dato:";
        cin>>r[i];
       
        b=b+r[i];
       
                
}
      c=b/10;
      
      cout<<"El promedio es: "<<c<<endl;
      cout<<"Y la sumatoria es: "<<b<<endl;
    return 0;
}





