#include <iostream>

using namespace std;

int contar(int n, int ref);

int main(){

    int n = 132335431;

    int r = contar(n, 3);

    cout << r << endl;


    return 0;
}
int contar(int n, int ref){

if(n<10){
    if(n == ref) {return 1;} else {return 0;}
}

int ultimo = n % 10;

if(ultimo == ref){
    return 1 + contar(n / 10, ref);
}
else{
    return contar(n / 10, ref);
}

}