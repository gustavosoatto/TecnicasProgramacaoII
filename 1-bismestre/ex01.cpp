// Escreva um programa q use uma instrução FOR p calcular a média inteira de vários números inteiros. Suponha que o último valor lido seja o sentinela 9999. Por exemplo, a sequência 10, 8, 11, 7, 9, 9999 indica q o programa deve calcular a média de todos os valores anteriores a 9999.

#include <iostream>
using namespace std;

int main()
{
    int quantidade = 0, number = 0, resultado = 0, sentinela = 0, media = 0;

    cout << "Quantos numeros devo calcular?" << endl;
    cin >> quantidade;

    for (int i = 1; i <= quantidade; i++)
    {
        cout << "Informe o numero a ser somado." << endl;
        cin >> number;
        if (number == 9999)
        {
            resultado = resultado - 9999;
            sentinela = i - 1;
        }
        sentinela = i;
        resultado = resultado + number;
        cout << "Soma igual a: " << resultado << endl;
    }
    media = resultado / sentinela;
    cout << "Media igual a: " << media << endl;
    return 0;
}