#include <iostream>
using namespace std;

int Soma(int vet[4], int i)
{
    int soma = 0;

    if (i > 0)
    {
        i--;
        soma = vet[i] + Soma(vet, i);
    }
    return soma;
}

int main()
{
    // PARTE@1
    int vet[4] = {1, 2, 3, 4};

    cout << Soma(vet, 4) << endl;
}