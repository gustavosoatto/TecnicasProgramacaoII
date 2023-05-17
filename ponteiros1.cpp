#include <iostream>
using namespace std;

// void invert(int a, int b, int c)
// {
//     int vet[3] = {a, b, c};
//     int *p = &vet[0];
//     *p = *vet;
//     cout << p[0] << endl
//          << p[1] << endl
//          << p[2] << endl;
//     *p = *vet+1;
// }

int invert(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    cout << *x << endl;
    cout << *y << endl;
    return *x, *y;
}

int main()
{
    int a = 5, b = 7, c = 9;
    invert(&a, &b);
    invert(&b, &c);
}