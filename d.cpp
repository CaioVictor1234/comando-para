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
    int soma = 0;
    
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;
    
    if (numero <= 0) {
        cout << "Número inválido." << endl;
        return 1;
    }
    
    for (int i = 1; i <= numero; ++i) {
        soma += i;
    }
    
    cout << "A soma dos números entre 1 e " << numero << " é: " << soma << endl;
    
    return 0;
}
