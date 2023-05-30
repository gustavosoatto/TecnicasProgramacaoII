#include <iostream>
#include <fstream>
using namespace std;

void ler_alunos();
void media_final();

int main()
{
    int flag;
    cout << "Deseja ver: \n "
         << "1: Media dos Alunos\n"
         << "2: Aprovacao dos Alunos\n"
         << endl;
    cin >> flag;
    if (flag == 1)
    {
        ler_alunos();
    }
    else if (flag == 2)
    {
        media_final();
    }
    else
    {
        cout << "Opcao n existe, roda denova ae q eu n vou por no while dessa vez n :)" << endl;
    }
}

void ler_alunos()
{
    ifstream ler("./ALUNOS.txt", ios::in);
    int matricula;
    string nome;
    string curso;
    int n1, n2;
    double media;

    while (ler >> matricula >> nome >> curso >> n1 >> n2)
    {
        media = (n1 + n2) / 2;
        cout << matricula << ' '
             << nome << ' '
             << media << endl;
    }
}

void media_final()
{
    ifstream ler("./ALUNOS.txt", ios::in);
    int matricula;
    string nome;
    string curso;
    int n1, n2;
    double media;

    cout << "Alunos Aprovados" << endl;
    while (ler >> matricula >> nome >> curso >> n1 >> n2)
    {
        media = (n1 + n2) / 2;
        if (media >= 7)
        {
            cout << matricula << ' '
                 << nome << ' '
                 << media << endl;
        }
    }
    cout << "Alunos Reprovados" << endl;
    while (ler >> matricula >> nome >> curso >> n1 >> n2)
    {
        media = (n1 + n2) / 2;
        if (media < 3)
        {
            cout << matricula << ' '
                 << nome << ' '
                 << media << endl;
        }
    }
    cout << "Alunos em Recuperacao" << endl;
    while (ler >> matricula >> nome >> curso >> n1 >> n2)
    {
        media = (n1 + n2) / 2;
        if (media > 3 && media < 7)
        {
            cout << matricula << ' '
                 << nome << ' '
                 << media << endl;
        }
    }
}