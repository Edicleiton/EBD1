#include <iostream>

using namespace std;

int ordem(int v[], int tam);
int inserir(int v[], int tam, int esquerda, int direita, int alvo);

int main(){

    int v[] = {70, 60, 50, 40, 30, 20, 10};
    int tam = sizeof(v)/sizeof(v[0]);

    int r = inserir(v, tam, 0, tam-1, 70);

    for(int i=0; i<tam; i++){cout << v[i] << endl;}

    cout << "Seu numero deve ser colocado na posicao " << r << endl;

    return 0;
}
int inserir(int v[], int tam, int esquerda, int direita, int alvo){
    ordem(v, tam);

    int meio = (esquerda + direita) / 2;

    if(esquerda>direita){return esquerda;}

    if(alvo == v[meio]){return meio;}

    if(alvo<v[meio]){return inserir(v, tam, esquerda, meio-1, alvo);}

    else{return inserir(v, tam, meio+1, direita, alvo);}

}
int ordem(int v[], int tam){
    for(int i=0; i<tam; i++){
        int min = i;
        for(int j=i+1; j<tam; j++){
            if(v[j] < v[min]){
                min = j;
            }

        }
        if(v[i] != v[min]){
            int temp;
            temp = v[i];
            v[i]=v[min];
            v[min]=temp;
        }
    }
}