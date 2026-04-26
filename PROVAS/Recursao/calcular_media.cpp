#include <iostream>

using namespace std;

int calcularMedia(int v[], int tam);

int soma(int v[], int tam);

int main(){

    int v[] = {100};
    int tam = sizeof(v)/sizeof(v[0]);

    int resultado = calcularMedia(v, tam);

    cout << resultado << endl;

    return 0;
}
int soma(int v[], int tam){
    int num;

    if(tam > 0){
        num = (v[tam-1]);
        return num + soma(v,tam-1);
    }
        return 0;

}
int calcularMedia(int v[], int tam){
    int r = soma(v, tam) / tam;
   return r;
}
