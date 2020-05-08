#include <iostream>

using namespace std;

int main(){

    int ahorros = 1000;

    cout << "Cuanto desea retirar?"<< endl;
    
    int retirar;

    cin >> retirar;

    int nuevobalance = ahorros - retirar;

    cout << "Tu nuevo balance es: "<< nuevobalance << endl;

    return 0;
}