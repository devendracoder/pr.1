#include<iostream>
using namespace std;
int main() {
    int p, q;
    cout << "Enter any two numbers:\n";
    cin >> p >> q;
    cout << endl;
    cout << "SUM        " << p << " + " << q << " = " <<p+q<< "\n";
    cout << "DIFFERENCE " << p << " - " << q << " = " <<p-q<< "\n";
    cout << "PRODUCT    " << p << " * " << q << " = " <<p*q<< "\n";
    cout << "QUOTIENT   " << p << " / " << q << " = " <<p/q<< "\n";
    cout << "MODULUS    " << p << " % " << q << " = " <<p%q<< "\n";
    return 0;
}