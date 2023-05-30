#include <iostream>
#include <fstream>
using namespace std;

struct registro
{
    int codigo_vendedor;
    string nome_vendedor;
    float valor_venda;
    string mes;
};

void criarRegistro();
void escreverRegistro();

int main()
{
    registro venda;
    int x = 0;

    cout << "1. Deseja criar um arquivo" << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        criarRegistro();
        break;
    case 2:
        escreverRegistro();
        break;
    default:
        break;
    }

    cout << "2. Deseja escrever no arquivo" << endl;
    cin >> x;
    if (x == 's')
    {
        escreverRegistro();
    }
}

void criarRegistro()
{
    string arquivo;
    cout << "Digite o nome do arquivo" << endl;
    cin >> arquivo;
    ofstream f(arquivo, ios::out | ios::binary);
    f.close();
}

void escreverRegistro()
{
    char x = 's';
    registro venda;
    fstream f;
    f.open("./VENDAS.txt", ios::binary | ios::in | ios::out);

    while (x == 's')
    {
        cin >> venda.codigo_vendedor >> venda.nome_vendedor >> venda.valor_venda >> venda.mes;
        f.write(reinterpret_cast<char *>(&venda), sizeof(registro));

        cout << "Deseja inserir mais dados (s/n)" << endl;
        cin >> x;
    }
}