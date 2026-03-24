#include<iostream>
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

