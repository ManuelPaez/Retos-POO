#include<iostream>
#include<vector>

using namespace std;

int solution(int A,int B, int K){

int contador=0;

for(int i = A; i<= B; i++){



    if(i%K==0){
        contador=contador+1;


    }

}

return contador;

}

int main(){
    int A,B,K,resultado=solution(A,B,K);

    cout<< "Captura el valor de A"<<endl;
    cin>>A;

    cout<< "Captura el valor de B"<<endl;
    cin>>B;

    cout<< "Captura el valor de K"<<endl;
    cin>>K;

   cout<<"Resultado:"<<resultado<<endl;
}

