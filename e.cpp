/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero;
    bool primo = true;
    
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    if (numero <= 1) {
        primo = false;
    } else {
        for (int i = 2; i <= numero / 2; ++i) {
            if (numero % i == 0) {
                primo = false;
                break;
            }
        }
    }
    
    if (primo) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }
    
    return 0;
}
