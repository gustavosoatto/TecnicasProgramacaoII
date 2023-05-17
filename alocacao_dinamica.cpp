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

    x = new box;
    x->address = new box;
    x->value = 10;
    x->address->address = new box;
    x->address->value = 20;
    x->address->address->address = new box;
    x->address->address->value = 30;

    cout << (*x).value << endl;        // syntax
    cout << x->address->value << endl; // simplificação de syntax
    cout << x->address->address->value << endl;
    // a && b
    x->address->address->address->address = new box;
    x->address->address->address->value = 40;
    x->address->address->address->address = x;

    cout << x->address->address->address->value << endl;
    cout << x->address->address->address->address->value << endl;
    // c
    x = x->address;
    delete x->address->address->address;

    cout << (*x).value << endl; // syntax option
    cout << x->address->value << endl;
    cout << x->address->address->value << endl;
    // d
}
