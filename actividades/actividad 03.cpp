#include <iostream>
using namespace std;

struct continente{
    int poblacion[0];
	string pais;
	string capital;

};


 struct continente hyrule;
 struct continente termina;
 struct continente altarea;
 struct continente hoen;
 struct continente kanto;



int main(void)
{
int i;
int a;

cout<<"Ingrese 5 paises , luego ingrese las capitales de dichos paises, y por ultimo la poblacion de cada pais , son 5 continentes a ingresar"<<endl;

cout<<"Continente hyrule"<<endl;

for(i=1;i<6;i++)
{ a=i;
cout<<"Ingrese pais"<<" "<< i<< ":"<<endl;
cin>> hyrule.pais[i];
cout<<"Ingrese capital"<<" "<< i<< ":"<<endl;
cin>> hyrule.capital[i];
cout<<"Ingrese poblacion"<<" "<< i<< ":"<<endl;
cin>> hyrule.poblacion[i];
cout<<endl;

}

cout<<"Continente termina"<<endl;

for(i=1;i<6;i++){
cout<<"Ingrese pais"<<" "<< i<< ":"<<endl;
cin>> termina.pais[i];
cout<<"Ingrese capital"<<" "<< i<< ":"<<endl;
cin>>termina.capital[i];
cout<<"Ingrese poblacion"<<" "<< i<< ":"<<endl;
cin>> termina.poblacion[i];

}


cout<<"Continente altarea"<<endl;
for(i=1;i<6;i++){
cout<<"Ingrese pais"<<" "<< i<< ":"<<endl;
cin>> altarea.pais[i];
cout<<"Ingrese capital"<<" "<< i<< ":"<<endl;
cin>> altarea.capital[i];
cout<<"Ingrese poblacion"<<" "<< i<< ":"<<endl;
cin>> altarea.poblacion[i];}

cout<<"Continente hoen"<<endl;

for(i=1;i<6;i++){
cout<<"Ingrese pais"<<" "<< i<< ":"<<endl;
cin>> hoen.pais[i];
cout<<"Ingrese capital"<<" "<< i<< ":"<<endl;
cin>> hoen.capital[i];
cout<<"Ingrese poblacion"<<" "<< i<< ":"<<endl;
cin>> hoen.poblacion[i];

}


cout<<"Continente kanto"<<endl;
 
 for(i=1;i<6;i++){
cout<<"Ingrese pais"<<" "<<i<< ":"<<endl;
cin>> kanto.pais[i];
cout<<"Ingrese capital"<<" "<<i<< ":"<<endl;
cin>> kanto.capital[i];
cout<<"Ingrese poblacion"<<" "<<i<< ":"<<endl;
cin>> kanto.poblacion[i];

}
return 0;
}
