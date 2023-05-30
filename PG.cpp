#include <iostream>
#include <cmath>
using namespace std;

int Progressao_Geometrica(int q, int n);

int main()
{
    int q, n;

    cout << "Digite a constante da razão 'q'" << endl;
    cin >> q;
    cout << "Digite a posicao que vc deseja encontrar 'n'" << endl;
    cin >> n;
    // receber valor q da constante e o enesimo valor que deseja encontrar
    cout << Progressao_Geometrica(q, n) << endl;
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