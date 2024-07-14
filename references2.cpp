#include <iostream>
using namespace std;
void value (string &x)
{
    cout << x;
}
// void value(int &a)
// {
//     a+=5;// when i use general parameter like void value (int x)answer will not change=10;
//          // when i use reference in parameter like void value (int &a)answer will be =15;10+5;
// }
// int main ()
// {
//     int x=10;
//     value (x);
//     cout << x;

// }
int main ()
{
    string s = "RoudraMondal";
    value (s);
    return 0;


}