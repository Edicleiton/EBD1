#include <iostream>

using namespace std;

void sort(int v[], int tam);

int main(){


    int v[] = {2,5,3,1,0,8,3};
    int tam = sizeof(v)/sizeof(v[0]);

    sort(v, tam);

    for(int i=0;i<tam; i++){
        cout << v[i] << endl;
    }

    return 0;
}
void sort(int v[], int tam){

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
