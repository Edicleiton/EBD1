#include <iostream>

using namespace std;

int menor_digito(int num);


int main(){

    int n;

    cin >> n;

    int r = menor_digito(n);

    cout << r << endl;


    return 0;
}
int menor_digito(int num){

    if(num < 10){
        return num;
    }
    int ultimo  = num % 10;

    int resto = menor_digito(num / 10);

    if(ultimo < resto){
        return ultimo;
    } 
    else {
        return resto;
    }


}