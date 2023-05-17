#include <iostream>
#include <cmath>
using namespace std;

int Progressao_Geometrica(int q, int n);
void PG_GPT();

int main()
{
    int q, n;

    cout << "Digite a constante da razão 'q'" << endl;
    cin >> q;
    cout << "Digite a posicao que vc deseja encontrar 'n'" << endl;
    cin >> n;
    // receber valor q da constante e o enesimo valor que deseja encontrar
    cout << Progressao_Geometrica(q, n) << endl;

    PG_GPT();
}

int Progressao_Geometrica(int q, int n)
{
    int a1;
    // receber o primeiro valor da sequencia

    cout << "Digite o valor do 1 termo" << endl;
    cin >> a1;
    n = a1 * pow(q, (n - 1));
    // faremos o enesimo valor menos 1
    // a constante será elevado ao valor anterior
    // multiplicamos pelo primeiro valor da sequencia

    return n;
}

void PG_GPT()
{
    {
        int a1, q, n;

        cout << "Digite o primeiro termo da progressão: ";
        cin >> a1;

        cout << "Digite a razão da progressão: ";
        cin >> q;

        cout << "Digite o número de termos da progressão: ";
        cin >> n;

        cout << "Progressão geométrica: ";

        for (int i = 0; i < n; i++)
        {
            cout << a1 * pow(q, i) << " ";
        }

        cout << endl;
    }
}