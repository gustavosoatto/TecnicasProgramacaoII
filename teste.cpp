#include <iostream>
using namespace std;

void function()
{
    double x = 0.1;
    x = x + x + x + x + x + x + x + x + x + x;
    if (x == 1.0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    cout << x << endl;
}

int main()
{
    function();
}