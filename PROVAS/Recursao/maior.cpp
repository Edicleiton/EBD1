#include <iostream>

using namespace std;

int maiorDigito(int n);

int main(){

    int num = 503489;

    int r = maiorDigito(num);

    cout << r << endl;

    return 0;
}
int maiorDigito(int n){

    if(n < 10){return n;}

    int ultimo = n % 10;
    int resto = maiorDigito(n / 10);

    if(ultimo > resto){return ultimo;}
    else{return resto;}

}