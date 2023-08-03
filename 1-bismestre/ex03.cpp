#include <iostream>
using namespace std;

int main()
{
    int somaLinha[4], somaColuna[4], somaDiagPrinc = 0, somaDiagSecun = 0;
    bool quadrado = true;

    int matriz[4][4] = {(1, 14, 15, 4),
                        (12, 7, 6, 9),
                        (8, 11, 10, 5),
                        (13, 2, 3, 16)};
    for (int i = 0; i < 4; i++)
    {
        somaLinha[i] = 0;
        somaColuna[i] = 0;
        for (int j = 0; j < 4; j++)
        {
            somaLinha[i] = somaLinha[i] + matriz[i][j];
            somaColuna[i] = somaColuna[i] + matriz[j][i];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        somaDiagPrinc = somaDiagPrinc + matriz[i][i];
        somaDiagSecun = somaDiagSecun + matriz[i][(4 - 1) - i];
    }

    for (int i = 0; i < 4; i++)
    {
        if (somaColuna[0] != somaLinha[0])
        {
            quadrado = false;
        }
    }

    if (somaDiagPrinc != somaColuna[0])
    {
        quadrado = false;
    }
    if (somaDiagSecun != somaColuna[0])
    {
        quadrado = false;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << somaLinha[i] << " ";
    }
    cout << endl;

    cout << "Soma colunas" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << somaColuna[i] << " ";
    }
    cout << endl;

    if (quadrado == true)
    {
        cout << "É um Quadrado Mágico" << endl;
    }
    if (quadrado == false)
    {
        cout << "Não é um Quadrado Mágico" << endl;
    }
}
