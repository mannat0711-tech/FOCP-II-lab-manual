 //ques 1.
 /*#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;
int calculateTotal() {
        return marks1 + marks2 + marks3;
    }
public:
    void inputDetails() {
        
 cout<<"\n Enter rollno,name,marks1,marks2,marks3: ";
 cin>>rollNo>>name>>marks1>>marks2>>marks3;

    }
 

    void displayDetails() {
        
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
    }
};

int main() {
    Student s1,s2;

    s1.inputDetails();
    s1.displayDetails();
    s2.inputDetails();
    s2.displayDetails();

    return 0;
} 
*/
/*ques2.

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void inputDimensions() {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;
    }

    float calculateArea() {
        return length * width;
    }

    float calculatePerimeter() {
        return 2 * (length + width);
    }

    void displayResult() {
        cout << "\n--- Rectangle Details ---" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle r;

    r.inputDimensions();
    r.displayResult();

    return 0;
}*/
 //ques 3.

 #include <iostream>
using namespace std;

class BankAccount {
public:
    string accountHolderName;
    int accountNumber;
    double balance;

    void inputDetails() {
        cout << "Enter Account Holder Name: ";
        cin >> accountHolderName;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawal Successful!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void displayDetails() {
        
        cout << "Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    double amount;

    acc.inputDetails();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    acc.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    acc.withdraw(amount);

    acc.displayDetails();

    return 0;
}
 
