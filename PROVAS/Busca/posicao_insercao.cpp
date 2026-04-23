#include <iostream>

using namespace std;

int posicao(int v[], int esquerda, int direita, int alvo);

int main(){

    int v[] = {10, 20, 30, 40};
    int tam = sizeof(v)/sizeof(v[0]);


    int r = posicao(v, 0, tam, 41);

    cout << "seu numero deve ser inserido no indice " << r << endl;


    return 0;
}
int posicao(int v[], int esquerda, int direita, int alvo){

    int meio = (esquerda + direita) / 2;

    if(esquerda >= direita)if(alvo > v[direita]){return direita;}
    else{return direita;}

    if(alvo == v[meio]){return meio;}
    
    if(alvo < v[meio]){return posicao(v, esquerda, meio, alvo);}

    else{return posicao(v, meio+1, direita, alvo);}

}