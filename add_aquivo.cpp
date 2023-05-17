#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void NovoArquivo();
void IncluirAluno();

int main()
{
    string option;

    cout << "Deseja abrir ou escrever um arquivo" << endl;
    cin >> option;
    if (option != "abrir")
    {
        IncluirAluno();
    }
    else
        NovoArquivo();
}

void NovoArquivo()
{
    ofstream ALUNOS("./ALUNOS.txt", ios::out);
    int numero;
    string nome;
    string curso;
    int nota1 = 0;
    int nota2 = 0;
    char option = 's';

    cout << "Para cadastrar um aluno digite \nNumero\nNome\nCurso\nNota_1\nNota_2" << endl;

    while (option != 'n')
    {
        cin >> numero >> nome >> curso >> nota1 >> nota2;
        ALUNOS << numero << " " << nome << " " << curso << " " << nota1 << " " << nota2 << "\n";
        cout << "Se deseja inserir outro dado precione 's', se n pressione 'n'" << endl;
        cin >> option;
    }
}

void IncluirAluno()
{
    ifstream NovoAluno("./ALUNOS.txt", ios::app);
    char option = 's';
    int numero;
    string nome;
    string curso;
    int nota1 = 0;
    int nota2 = 0;
    int N_numero;
    string N_nome;
    string N_curso;
    int N_nota1 = 0;
    int N_nota2 = 0;

    while (option != 'n')
    {
        NovoAluno >> numero >> nome >> curso >> nota1 >> nota2;
        cout << "Para cadastrar um novo aluno digite \nNumero\nNome\nCurso\nNota_1\nNota_2" << endl;
        cin >> N_numero >> N_nome >> N_curso >> N_nota1 >> N_nota2;

        if (numero == N_numero)
        {
            cout << "Esse aluno já foi cadastrado" << endl;
        }
        else
        {
            ofstream NovoAluno("./ALUNOS.txt", ios::app);
            NovoAluno << N_numero << " " << N_nome << " " << N_curso << " " << N_nota1 << " " << N_nota2 << "\n";
        }

        cout << "Se deseja inserir outro dado precione 's', se n pressione 'n'" << endl;
        cin >> option;
    }
}