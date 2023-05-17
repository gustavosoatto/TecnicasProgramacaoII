#include <iostream>
using namespace std;

// 1) multiplicação de vetores
void vetor_multiplicacao(int *vet, int k, int vetor_tamanho)
{
    for (int i = 0; i < vetor_tamanho; i++)
    {
        cout << *(vet + i) * k << endl;
    }
}

// 2) soma 2 vetores e atribui ao primeiro
void vetor_soma_incress(int *vet1, int *vet2, int vetor_tamanho2)
{
    for (int i = 0; i < vetor_tamanho2; i++)
    {
        *(vet1 + i) = *(vet1 + i) + *(vet2 + i);
        cout << *(vet1 + i) << endl;
    }
}

int main()
{
    // int vetor[4], multiplicador, vetor_tamanho = 4;

    // cout << "O tamanho do vetor e 4\n"
    //      << "Por quanto devo multiplicar\n";
    // cin >> multiplicador;
    // cout << "Quais os valores do vetor\n";
    // for (int i = 0; i < vetor_tamanho; i++)
    // {
    //     cin >> *(vetor + i);
    // }
    // vetor_multiplicacao(vetor, multiplicador, vetor_tamanho);

    int vetor2[8] = {1, 2, 3, 4, 5, 6, 7, 8}, vetor3[8] = {8, 7, 6, 5, 4, 3, 2, 1}, vetor_tamanho2 = 8;
    vetor_soma_incress(vetor2, vetor3, vetor_tamanho2);
}