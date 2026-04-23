#include <iostream>

using namespace std;

int acharPico(int v[], int esquerda, int direita);

int main(){

    int v[] = {95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10}; 
    int tam = sizeof(v)/sizeof(v[0]);

    int r = acharPico(v, 0, tam-1);
    cout << r << endl;

    return 0;
}
int acharPico(int v[], int esquerda, int direita){

    int meio = (esquerda + direita) / 2;

    if(esquerda>=direita){return esquerda;}

    if(v[meio]>=v[meio-1] && v[meio]>=v[meio+1]){return meio;}

    if(v[meio]>=v[meio-1]){return acharPico(v, meio+1, direita);}

    else{return acharPico(v, esquerda, meio-1);}

}