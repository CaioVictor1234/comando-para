/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    bool primo;
    
    cout << "Números primos entre 1 e 100:" << endl;
    
    for (int num = 2; num <= 100; ++num) {
        primo = true;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            cout << num << endl;
        }
    }
    
    return 0;
}
