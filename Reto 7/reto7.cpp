#include <stdlib.h>
#include<iostream>
#include<vector>

using namespace std;

int solution(vector<int> A){
    //Paso 0.1:
    int min = 100000000; //Máxima diferencia posible
    int N = A.size(); //Número de enteros en A

    //Paso 1:
    for(int P = 1; P < N; P++){
        //1.1 Partir array en dos partes
        vector<int> parte1(A.begin(), A.end()-(N-P));
        vector<int> parte2(A.begin()+P, A.end());
        /*for(int i = 0; i < parte1.size(); i++){
           cout<<parte1[i]<< ", ";
        }
        cout<<endl;
        for(int i = 0; i < parte2.size(); i++){
            cout<<parte2[i]<< ", ";
        }
        cout<<endl;
        */
        //Paso 1.2
        int suma1 = 0; //Suma total de parte 1
        for(int i = 0; i < parte1.size(); i++){
           suma1 = suma1 + parte1[i];
        }

        //Paso 1.3
        int suma2 = 0; //Suma total de parte 2
        for(int i = 0; i < parte2.size(); i++){
           suma2 = suma2 + parte2[i];
        }

        //1.4 y 1.5
        int valorActual = abs(suma1 - suma2);

        //1.6
       // if (valorActual<min){
          //  cout<<valorActual<<endl;
        //}

        if (valorActual < min){
			min = valorActual;
        }

    }

    //Paso 2
    return min;

}

int main(){
    vector<int> A{3, 1, 2, 4, 3};
    cout << solution(A) << endl;
}