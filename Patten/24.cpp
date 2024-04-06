/*
print this :-
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
* 
*/

#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    int m=4;
    for (int i = 1; i<=m; i++)
    {
        for (int j = 1; j<=m-i+1; j++)
        {
           cout<<"*"<<" ";
        }
       cout<<endl; 
    }
    
    return 0;
}