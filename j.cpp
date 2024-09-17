/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    
    for (int i = 2; i <= 100; i += 2) {
        soma += i;
    }
    
    cout << "A soma dos números pares entre 1 e 100 é: " << soma << endl;
    
    return 0;
}
