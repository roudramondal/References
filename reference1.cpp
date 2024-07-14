#include <iostream>
using namespace std;
void swap(int &a1,int &b1)
{
    int temp=a1;
    a1=b1;
    b1=temp;
}
int main ()
{
    // int x=10;
    // int &y=x;
    // cout << y <<"\n";
    // x+=5;
    // cout << y << "\n";
    // y+=5;
    // cout << y << "\n";
    int a=10,b=14;
    swap(a,b);
    cout << a << "  "<<b <<"\n";


    return 0;
}
