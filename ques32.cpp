/*Q32. A stock market app tracks first and second highest stock values. Implement a solution to find the largest
and second largest number in an array of size 5.*/

#include <iostream>
using namespace std;

int main() {
    int a[5], i;
    int largest, second ;
//just wrote second because on writing second largest it was showing error
    cout << "Enter 5 numbers:\n";//input of 5 numbers
    for(i = 0; i < 5; i++) {
        cin >> a[i];
    }

    largest = a[0];
    second   = a[0];

    for(i = 0; i < 5; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
    }

    for(i = 0; i < 5; i++) {
        if(a[i] > second   && a[i] < largest) {
            second = a[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << second << endl;

    return 0;
}
