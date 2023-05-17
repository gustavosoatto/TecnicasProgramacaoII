#include <iostream>
#include <fstream>
using namespace std;

void arquivo_out();
void arquivo_in();

int main()
{
    string option;

    cout << "Deseja abrir ou escrever um arquivo" << endl;
    cin >> option;
    if (option != "abrir")
    {
        arquivo_out();
    }
    else
        arquivo_in();
}

void arquivo_out()
{
    ofstream outAlunos_CC("./Alunos_CC.txt", ios::out);
    char option;
    int matricula;
    string nome, email;

    do
    {
        cout << "Digite a matricula" << endl;
        cin >> matricula;
        cout << "Digite o nome" << endl;
        cin >> nome;
        cout << "Digite o email" << endl;
        cin >> email;

        outAlunos_CC << matricula << " " << nome << " " << email << " " << endl;
        cout << "Deseja inserir mais dados (s/n)" << endl;
        cin >> option;
    } while (option != 'n');
}

void arquivo_in()
{
    ifstream inAluno_CC("./Alunos_CC.txt", ios::in);
    char option;
    int matricula;
    string nome, email;

    do
    {
        inAluno_CC >> matricula >> nome >> email;
        cout << matricula << nome << email << endl;

        cout << "Deseja ler mais dados (s/n)" << endl;
        cin >> option;
    } while (option != 'n');
}