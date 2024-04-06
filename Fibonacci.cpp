// Fibonacci Serice 

// 0 1 1 2 3 5 8 13 21 ......

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";

    for (int  i = 0; i < n; i++)
    {
        int nextnum = a+b;
        cout<<nextnum<<" ";
        a=b;
        b=nextnum;
    }
    
    return 0;

}