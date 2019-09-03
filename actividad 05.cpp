#include <iostream>

using namespace std;

int multiplicacionrecursiva(int x, int y);


int main(void){

int a=0;
int b=0;

cout<<"Ingrese los valores de a:"<<endl;
cin>>a;
cout<<"Ingrese los valores de b:"<<endl;
cin>>b;
 
cout<< "El resultado de " << a << " por " << b << " es igual a : " << multiplicacionrecursiva(a,b)<<endl;



}
int multiplicacionrecursiva(int x, int y){
if(x==1){
	return 1;
}

else if(y>1){
	
	return x + multiplicacionrecursiva(x,y-1);
	
}


}







