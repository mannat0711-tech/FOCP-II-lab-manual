/* Q25.  
A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
• Contain at least one uppercase letter (A–Z)
• Contain at least one lowercase letter (a–z)
• Contain at least one digit (0–9)
• Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application*/

#include <iostream>
using namespace std;

int main() {
    char password[50];
    int i;
    int upper = 0, lower = 0, digit = 0, special = 0;

    cout << "Enter password: ";
    cin >> password;

    for(i = 0; password[i] != '\0'; i++) {
        char ch = password[i];

        if(ch >= 'A' && ch <= 'Z')
            upper = 1;
        else if(ch >= 'a' && ch <= 'z')
            lower = 1;
        else if(ch >= '0' && ch <= '9')
            digit = 1;
        else if(ch == '@' || ch == '#' || ch == '$' || ch == '%' ||
                ch == '!' || ch == '&' || ch == '*')
            special = 1;
    }

    if(upper == 1 && lower == 1 && digit == 1 && special == 1)
        cout << "Strong Password";
    else
        cout << "Weak Password";

    return 0;
}
