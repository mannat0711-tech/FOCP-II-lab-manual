#include<iostream>
using namespace std;
 class A

 {
    public:
    int a;
    A()
    {
        cout<<"default constructor "<<endl;
        a=150;
    }
    void Display()
    {
        cout<<"constructor is called";
    }
    ~A()
    {
        cout<<"constructor destroyed";
    }
 };

  class B

 {
    public:
    int b;
    B()
    {
        cout<<"default constructor "<<endl;
         b=219;
    }
    void Display()
    {
        cout<<"constructor is called";
    }
    ~B()
    {
        cout<<"constructor destroyed";
    }
 };

  class C

 {
    public:
    int c;
    C()
    {
        cout<<"default constructor "<<endl;
         c=350;
    }
    void Display()
    {
        cout<<"constructor is called";
    }
    ~C()
    {
        cout<<"constructor destroyed";
    }
 };
 class D

 {
    public:
    int d;
    D()
    {
        cout<<"default constructor "<<endl;
         d=500;
    }
    void Display()
    {
        cout<<"constructor is called";
    }
    ~D()
    {
        cout<<"constructor destroyed";
    }
 };

 int main()
 {
    
 }