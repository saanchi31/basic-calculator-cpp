#include<iostream>
using namespace std;

int main () {
    double a, b;
    char op;
   
      cout << " number 1 : ";
      cin >> a;

      cout << " operator(+, -, *, /) : ";
      cin >> op;

      cout << " number 2 : ";
      cin >> b;  
    if (op == '+') {
        cout << " answer : " << a + b << endl;
    } else if (op == '-') {
        cout << " answer : " << a - b << endl;
    } else if (op == '*') {
        cout << " answer : " << a * b << endl;
    } else if (op == '/'){
        cout << " answer : " << a / b << endl;
    }
    return 0;
}