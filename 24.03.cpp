/*#include<iostream>
using namespace std;
class A
{
    int a1;
    int a2;
    int v3;
    int a3;
    public:
    A(){
        a1=0;
        a2=0;
        a3=0;}
        A(int a1,int a2,int v3){
            this->a1=a1;
            (*this).a2=a2;
            a3=v3;
        }
        void display()
        {cout<<"\n a1 = "<<a1<<"\n a2= "<<a2<<"\n v3= "<<v3;}
    
};
int main()
{
    A obj1,obj2(23,67,90);
    A *obj3=new A(45,67,78);
    A *obj4=new A();
    obj1.display();
    obj2.display();
    cout<<"\n print ptr obj";
    obj3->display();

    return 0;
}



#include <iostream>
using namespace std;

class Person
{
    string name;int age;
    public:
    Person()
    { 
        cout<<"\n Person default constructor";
        name="Default";age=18;
    }
    Person(string nm,int ag)
    {
        cout<<"\n Person parametarized constrtuctor";
        name=nm;age=ag;
    }
    void display()
    {
        cout<<"\n Name="<<name<<"\n Age= "<<age;
    }
};


class Student:public Person
{
    string rollno;
    public:
    Student()
    {
        cout<<"\n Student default constructor"; rollno="25CSU000";
    }
    Student(string na,int ag,string rno):Person(na,ag)//initialization list
    {
        cout<<"\n Student Parametrised";
        rollno=rno;
    }
    void display_Student()
    {
        display();
        cout<<"\n Roll no= "<<rollno;
    }
};

int main()
{
    Person p1,p2("abcd",23,"25CSU111");
    p1.display();
    p1.display_Student();
    p2.display_Student();
    return 0;
}

*/
 /*Create a class Account with account number and balance. 
Add a function displayAccount(). 
Derive a class SavingsAccount that includes interest rate and
 a function calculateInterest(). 
 Demonstrate usage of both classes.*/

#include<iostream>
using namespace std;
class Account{
string account_no; 
protected:
float balance;
public:
Account(){cout<<"\n default account";
    account_no="NA";balance=0;}
//Account(string accno,float bal):account_no(accno),balance(bal)--syntax for 
// initialization list
    Account(string accno,float bal)
{
    cout<<"\n Parametarized account"; 
    account_number=accno;
    balance=bal;}
void displayAccount()
{
    cout<<"\n Account number : "<<account_no;
    cout<<"\n Account balance : "<<balance;
}
};
class SavingsAccount:public Account
{
float int_rate;
public:
SavingsAccount(){
    cout<<"\n Default SA";
    int_rate=1;
}
SavingsAccount(string ano,float bal,float ir):Account(ano,bal)
{ cout<<"\n Parametarised SA";
 
    int_rate=ir;
}
void calculateInterest()
{
    cout<<"\n Your Account details ";
   displayAccount();
   cout<<"\n Balance post interest rate : "<<(balance*int_rate)/100;
}
};
int main()
{SavingsAccount sa1,sa2("UTI12345678",9000000,5.7);
    sa1.calculateInterest();
    //sa2.balance=-10;
 sa2.calculateInterest();
    return 0;
}