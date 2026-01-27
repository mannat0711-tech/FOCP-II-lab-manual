/*Q3. A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa.*/
#include <iostream>
using namespace std;

int main() {
    float f;//f is for fahrenheit reading
    cin >> f;//input
//c is for celsius acc to the formula c=(f-32)*5/9
    float c = (f - 32) * 5 / 9;
    cout << c;
//output of celsius reading
    return 0;
}
