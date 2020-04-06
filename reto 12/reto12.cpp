#include<iostream>
#include<vector>

using namespace std;

int solution(vector <int> A){

float promedio_minimo=10000;
int N=A.size();
int pos;

for(int P=0; P<N-1; P++){

    for(int Q=P+1; Q<N; Q++){
        float suma=0;

    for(int i=P; i<=Q; i++){
        suma=suma + A[i];
    }

    float promedio=suma/(Q-P+1);

    if(promedio<promedio_minimo){
        promedio_minimo=promedio;
        pos=P;
    }

}

}

return pos;
}

int main(){
    int res;
    vector <int> A{4,2,2,5,1,5,8};
    res=solution(A);
    cout<<res<<endl;
}