#include <iostream>

using namespace std;

void sort(int V[]);

int main(){

    int v[] = {7,6,5,4,3,2,1};

    sort(v);

    for(int i=0; i<sizeof(v)/sizeof(v[0]); i++){cout << v[i] << endl;}

    return 0;
}
void sort(int v[]){
    for(int i=1; i<5; i++){
        int j = i-1; // Aqui o J vai estar a esquerda do I para comparação do menor
        int novo = v[i]; //Aqui vai ser criada uma variável para guarda o valor de v[i] pq vai ser preciso utilizar ele dps

        while(j>=0 && novo<v[j]){ // Aqui vai ser definida uma condição de parada para o J não estrapolar o -1 e vai ter uma comparação também de que se o v[J] que é o valor anterior é menor do que o novo que é o valor de v[i]

            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = novo;
    }
}