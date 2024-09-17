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
    
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;
    
    if (numero <= 0) {
        cout << "Número inválido." << endl;
        return 1;
    }
    
    cout << "Divisores de " << numero << " são:" << endl;
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            cout << i << endl;
        }
    }
    
    return 0;
}
