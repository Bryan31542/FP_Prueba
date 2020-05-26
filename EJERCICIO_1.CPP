// Realizar un programa que verifique si un número es divisible entre otro

#include <iostream>

using namespace std;

int main(void){

    int a, b;

    cout << "\nVERIFICAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO" << endl << endl;

    cout << "Ingrese el valor del primer numero: ";
    cin >> a;

    cout << "Ingrese el valor del segundo numero: ";
    cin >> b;

    if ((a % b) == 0){

        cout << "\nSon divisibles entre si";

    }

    else {

        cout << "\nNo son divisibles entre si";

    }

    return 0;
}