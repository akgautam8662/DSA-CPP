/*
Print This :- 
9 8 7 
6 5 4
3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number :-";
    cin>>n;
    int count;
    cout<<"Enter Number you have to start :- ";
    cin>>count;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
           cout<<count<<" ";
           count=count-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}