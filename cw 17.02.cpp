#include<iostream>
using namespace std;
void computePerfomance(int m[],int n)
{
    int min=m[0],max=m[0],avg=m[0];
    for(int i=1;i<n;i++)
    {
        if (max<m[i])
        max=m[i];
        if(min>m[i])
        min=m[i];
        avg+=m[i];
    }
    cout<<"\n max="<<max<<"\n min="<<min<<"\n avg="<<float(avg)/n;
}
int main()
{
    int  marks[]={56,78,67,98,76,23,90,66,89,75};
    computePerfomance(marks,10);
    return 0;

}