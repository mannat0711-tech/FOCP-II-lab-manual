/*Q5. A student wants to swap the values of two variables for practising coding basics.
Implement a solution to swap two numbers using different techniques.*/
#include <iostream>
using namespace std;
//using third variable a temporary variable
int main() {
    int a, b, temp;
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
//without third variable 
    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b;
    return 0;
}

