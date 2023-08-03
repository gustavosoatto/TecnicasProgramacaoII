#include <iostream>
using namespace std;

struct DadosAlunos
{
    float media;
    int idade;
};

struct Livro
{
    string titulo;
    int anoEdicao;
    int nPaginas;
    float preco;
};

void loop(DadosAlunos *aluno, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Digite a media do aluno" << endl;
        cin >> aluno[i].media;
        cout << "Agora digite a idade do aluno" << endl;
        cin >> aluno[i].idade;

        cout << "A media do aluno " << i << ": " << aluno[i].media << endl
             << "E sua idade: " << aluno[i].idade << endl;
    }
}

int main()
{
    DadosAlunos aluno[10];
    int quantAl = 0;
    int soma = 0;
    int contador = 0;

    loop(aluno, 10);

    for (int i = 1; i <= quantAl; i++)
    {
        cout << "Digite a media do aluno" << endl;
        cin >> aluno[i].media;
        cout << "Agora digite a idade do aluno" << endl;
        cin >> aluno[i].idade;

        cout << "A media do aluno " << i << ": " << aluno[i].media << endl
             << "E sua idade: " << aluno[i].idade << endl;
    }

    Livro senhorDosAneis[5];

    for (int j = 0; j < 5; j++)
    {
        cout << "Digite titulo: " << endl;
        getline(cin, senhorDosAneis[j].titulo);
        cout << "Digite o Ano da Edicao: " << endl;
        cin >> senhorDosAneis[j].anoEdicao;
        cout << "Digite o numero de pagina: " << endl;
        cin >> senhorDosAneis[j].nPaginas;
        cout << "Digite o preco do livro: " << endl;
        cin >> senhorDosAneis[j].preco;
        cin.ignore();

        soma = soma + senhorDosAneis[j].nPaginas;
        contador = contador++;
    }
    int media = soma / contador;
    cout << media << endl;
}
