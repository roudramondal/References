#include <iostream>
using namespace std;
void fun ( string &&s)//(string &&s)
{
    //s = "hi"+s;
    cout<< "  " << s;
}
int main ()
{
    fun ("user");
    return 0;

}

