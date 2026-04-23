#include <iostream>

using namespace std;

int posicao(int v[], int esquerda, int direita, int alvo);

int main(){

    int v[] = {1, 3, 5, 7};
    int tam = sizeof(v)/sizeof(v[0]);

    int r = posicao(v, 0, tam-1, 3);

    cout << r << endl;

    return 0;
}
int posicao(int v[], int esquerda, int direita, int alvo){

    int meio = (esquerda + direita) / 2;

    if(esquerda>direita){return esquerda;}

    if(alvo==v[meio]){return meio;}

    if(alvo<v[meio]){return posicao(v,esquerda, meio-1, alvo);}

    if(alvo>v[meio]){return posicao(v,meio+1,direita, alvo);}


}