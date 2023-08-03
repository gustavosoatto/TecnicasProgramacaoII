#include <iostream>
#include <time.h>
using namespace std;

bool flip()
{
    srand(time(0));
    int r = rand() % 2;

    if (r == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char jogar;
    int coroa = 0, cara = 0, tentativas = 0;

    cout << "Você gostaria de jogar a moeda? (s/n): " << endl;
    cin >> jogar;

    while (jogar != 'n')
    {
        bool jogada = flip();
        if (jogada == true)
        {
            cara++;
            cout << "Cara" << endl;
        }
        else if (jogada == false)
        {
            coroa++;
            cout << "coroa" << endl;
        }
        tentativas++;

        cout << "Você gostaria de jogar novamente? (s/n): " << endl;
        cin >> jogar;
    }

    cout << "Número total de tentativas: " << tentativas << endl;
    cout << "Número total de caras: " << cara << endl;
    cout << "Número total de coroas: " << coroa << endl;

    return 0;
}
