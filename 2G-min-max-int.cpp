#include <iostream>
using namespace std;

int main(){
    int max = 2147483647;
    int min = -2147483648;
    // Il numero massimo è 2^31-1 = 2147483647
    // Il numero minimo è -2^31 = -2147483648
    cout << "Ecco il minimo: " << min << endl;
    cout << "Ecco il massimo: " << max << endl;
    cout << "Ecco il minimo-1: " << min-1 << endl;
    cout << "Ecco il massimo+1: " << max+1 << endl;
    return 0;
}
