// Converting decimal to binary..

#include<iostream>
using namespace std;
int main()
{
    int n;
    int rem;
    int a[10];
    int i=0;
    cout<<"Enter Number you want to convert into binary : ";
    cin>>n;

    while (n != 0)
    {
        rem = n%2;
        n = n/2;
        a[i] = rem;
        i++;
    }
    cout<<"Binary of the given number= ";    
        for(i=i-1 ;i>=0 ;i--)    
    {    
        cout<<a[i];    
    }  

    return 0;
}