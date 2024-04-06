#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=5;

    cout<<"a & b  " <<(a&b) <<endl;
    cout<<"a | b  " <<(a|b) <<endl;
    cout<<"a ~ b  " <<(~b) <<endl;
    cout<<"a ^ b  " <<(a^b) <<endl;

cout<<"-------------------------"<<endl;

    // LEFT SHIFT and  RIGHT SHIFT..
    cout<<"b<<1  "<<(b<<1)<<endl;
    cout<<"7<<2  "<<(7<<2)<<endl;

    cout<<"b>>2  "<<(b>>2)<<endl;

cout<<"-------------------------"<<endl;

    // INCREMENT and DECREMENT OPERATORS 
    int i=7;
    cout<<(++i)<<endl;  //phle add kro pher print kro..
    cout<<(i++)<<endl;  //phle print kro pher add krna.. i=9

    cout<<(--i)<<endl;  //phle subtract kro pher print kro.. i=8
    cout<<(i--)<<endl;  //phle print kro pher subtract krna.. i=7

    return 0;
}