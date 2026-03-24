/*Q1. Create a class Student with data members: name and marks. Use a constructor to initialize
the values and display the student details using a member function*/
 #include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;
 
    Student(string n, int m) {
        name = n;
        marks = m;
    }

   
    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Mansi", 85);    

    s1.display();               
    return 0;
}

/*Q2. Design a class Car that has attributes: brand and price. Write a constructor to assign values
and create two objects to display the details of both cars.*/

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;

   
    Car(string b, int p) {
        brand = b;
        price = p;
    }
 
    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
  
    Car c1("Toyota", 1000000);
    Car c2("Honda", 900000);

 
    cout << "Car 1 Details:" << endl;
    c1.display();

    cout << endl;

    cout << "Car 2 Details:" << endl;
    c2.display();

    return 0;
}

/*Q3. Write a C++ program to create a class Rectangle with length and breadth as data members.
Use a constructor to initialize the dimensions and calculate the area of the rectangle.*/
#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float breadth;
 
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
 
    void area() {
        float a = length * breadth;
        cout << "Area of Rectangle: " << a << endl;
    }
};

int main() {
    Rectangle r1(8,4);    

    r1.area();             

    return 0;
}


/*Q4. Create a class Employee with data members: emp_id and salary. Initialize the values using
a parameterized constructor and display the employee information.*/


#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    int salary;

    Employee(int a, int b) {
        emp_id = a;
        salary = b;
    }

    void show() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1(123,50000);

    e1.show();

    return 0;
}


/*Q5. Define a class BankAccount with account number and balance. Use a constructor to set
the initial balance and write a function to display account details.*/


#include<iostream>
using namespace std;

class BankAccount{
    public:
    int acc_no;
    int balance;

    BankAccount(int a,int b)
    {
        acc_no=a;
        balance=b;
    }
    void show()
     {
        cout<<"Account Number :"<< acc_no<< endl;
        cout<<"balance:"<< balance<< endl;
     }
};

int main() {
    BankAccount b1(102, 56755);   

    b1.show();                   

    return 0;
}

/*Q6. Create a class Book that stores book title and price. Initialize the values using a constructor
and create multiple objects to show how each object stores different data. Also explain the
role of the constructor in this program.*/
