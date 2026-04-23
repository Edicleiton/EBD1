#include <iostream>

using namespace std;

int impar(int n);

int main(){

    int num = 1267774613;

    int r = impar(num);

    cout << r << endl;


    return 0;
}
int impar(int n){

    int ultimo = n % 10;

if(n < 10){
    if(n % 2 == 0){return 0;}
    else{return 1;}
}

if(ultimo % 2 == 0){return 0 + impar(n / 10);}
else{return 1 + impar(n / 10);}
}