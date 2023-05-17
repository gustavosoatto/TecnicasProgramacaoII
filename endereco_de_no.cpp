#include <iostream>
using namespace std;

struct box
{
    int value;
    box *address;
};

int main()
{
    box *x;
    box a, b, c;

    a.address = &b;
    a.value = 10;
    b.address = &c;
    b.value = 20;
    c.address = &a;
    c.value = 30;

    x = &a;

    cout << (*x).value << endl; // syntax option
    cout << x->address->value << endl;
    cout << x->address->address->value << endl;

    box d;

    c.address = &d;

    d.address = &a;
    d.value = 40;

    cout << (*x).value << endl; // syntax option
    cout << x->address->value << endl;
    cout << x->address->address->value << endl;
    cout << (*x).address->address->address->value << endl;
}