/*
print This :- 
                     * 
                   * * 
                 * * * 
               * * * * 
             * * * * * 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any number :- ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space =n-i;
        while (space)
        {
            cout<<" ";
            space++;
            int j=1;
            while (j<=n)
            {
                cout<<"*";
                j++;
            }   
        }
        cout<<endl;
        i++;
    }
    return 0;
}