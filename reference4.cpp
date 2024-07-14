#include<iostream>
using namespace std;
int main ()
{
    int x=10,y=20;
    int &z=x;
    z=y;
    z+=5;
    cout << x<<"\n"<<y<<"\n"<<z<<"\n";
    return 0;
}