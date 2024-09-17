/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int numero;
    int maior = numeric_limits<int>::min(); // Inicializa com o menor valor possível
    
    cout << "Digite números inteiros (digite um número negativo para encerrar): " << endl;
    
    while (true) {
        cin >> numero;
        if (numero < 0) {
            break;
        }
        if (numero > maior) {
            maior = numero;
        }
    }
    
    cout << "O maior número inserido é: " << maior << endl;
    
    return 0;
}
