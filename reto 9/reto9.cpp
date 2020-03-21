#include <iostream>
using namespace std;

int main(]) {
 int num,men,may,n;

cout<<"Ingresa los valores: \n"; //no se porque pero despues de que ponga los datos pone una letra y despues el espacio
cin>> n;

 may=0;
 men=9999;

 while(num!=0){
  cin>>num;
  if(num){
   if(num>may){//guarda el mayor
    may=num;
   }
   if(num<men){//guarda el menor
    men=num;
   }

  }
 }

 cout<<"El menor numero es: "<<men<<endl;

 return 0;
}