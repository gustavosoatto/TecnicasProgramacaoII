#include <iostream>
using namespace std;

int soma_matriz(int **matriz, int x, int y)
{
    int principal, secundaria;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
        }
        principal = *(*(matriz + i) + i) + principal;
    }
    return principal;
}

int main()
{
    int x, y;
    int **matriz;
    srand(time(0));

    cout << "Informe a quantidade de linhas e colunas respectivamente" << endl;
    cin >> x;
    cin >> y;

    matriz = new int *[x];
    for (int i = 0; i < x; i++)
    {
        *(matriz + i) = new int[y];
        cout << endl;
        for (int j = 0; j < y; j++)
        {
            *(*(matriz + i) + j) = rand() % 100;
            cout << *(*(matriz + i) + j) << endl;
        }
    }

    cout << soma_matriz(matriz, x, y) << endl;
}