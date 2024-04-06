/*
print this :-
                *         *
                *         * 
                *         *
                * * * * * *
                *         *        
                *         * 
                *         *

*/
#include<iostream>
using namespace std;
int main()
{
    // space= 4
    // line =3
    int n=3;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            cout<<"*"<<" ";
        }
      cout<<endl;  
    }
    
    return 0;
}