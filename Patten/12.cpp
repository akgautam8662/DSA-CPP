/*
Print this :- 
1
2 1
3 2 1 
4 3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    int i =1;
    while (i<=n)
    {
        int j=1;
        int value=i;
        while (j<=i)
        {
            cout<<value<<" ";
            value--;
            j++;
        }
    cout<<endl;
    i++;
    }
    
    return 0;
}