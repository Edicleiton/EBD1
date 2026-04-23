#include <iostream>

using namespace std;

bool consecutivos(int num);

int main(){

    int num = 1123456789;

    bool r = consecutivos(num);

    cout << r << endl;


    return 0;
}
bool consecutivos(int num){

    if(num < 10){
        return false;
    }

    int ultimo = num % 10;
    int penultimo = (num / 10) % 10;

    if(ultimo == penultimo){
        return true;
    }
    else {
        return consecutivos(num / 10);
    }

}