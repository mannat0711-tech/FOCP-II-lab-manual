#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    void setCandy(string,int);
    void displayCandy();

};
void Candy::setCandy(string c,int p)
{
    color=c;points=p;
}
void Candy::displayCandy()
{
    cout<<"\n color :"<<color;
    cout<<"\n points :"<<points;
}
int main()
{
    Candy c1,c2;
    c1.setCandy("red",35);
    c2.setCandy("blue",40);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}


#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    Candy();//default constructor
    Candy(string clr);//parameterized contructor

    Candy(string clr,int pts);//parameterized contructor
     
    void setCandy(string,int);
    void displayCandy();
    void 

};
Candy::Candy()
{
    color="black";points=0;
}
Candy::Candy(string clr)
{
    color=clr;points=0
    ;
}
Candy::Candy(string clr,int pts)
{
    color=clr;points=pts;
}
void Candy::setCandy(string c,int p)
{
    color=c;points=p;
}
void Candy::displayCandy()
{
    cout<<"\n color :"<<color;
    cout<<"\n points :"<<points;
}
int main()
{
    Candy c1,c2("red",30);
   // c1.setCandy("red",35);
    //c2.setCandy("blue",40);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}

