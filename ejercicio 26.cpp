#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Conjugada(int x, int y);
int main(void){
int a;
int b;

cout<<"Ingrese la parte real: ";
cin>>a;
cout<<endl;

cout<<"ingrese la parte imaginaria: ";
cin>>b;
cout<<endl;
Conjugada(a, b);}
void Conjugada(int x, int y){
int d;
y=y*(-1);

d=y+y;

if(d<1){

cout<<"La conjugada del numero complejo es: "<<x<<y<<"j";
}
if(d>=1){

cout<<"La conjugada del numero complejo es: "<<x<<"+"<<y<<"j";
} }

