/*Q31. A manufacturing QC system checks defect codes divisible by both 3 and 5.
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5*/
//the question demands an array,loop and condition


#include <iostream>
using namespace std;

int main() {
    int a[5], count = 0;

    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        if(a[i] % 3 == 0 && a[i] % 5 == 0)
            count++;
    }

    cout << "Count = " << count;

    return 0;
}
