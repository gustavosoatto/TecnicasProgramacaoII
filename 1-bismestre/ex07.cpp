#include <string>
#include <iostream>
using namespace std;

int main()
{
    string frase = "", frase2 = "";

    cout << "\nDigite uma frase";
    cin.ignore();
    getline(cin, frase);
    cout << frase.replace(frase.find("ALUNO", 0), 5, "ESTUDANTE") << "\n";

    cout << "\nDigite uma outra frase";
    cin.ignore();
    getline(cin, frase2);
    cout << frase2.replace(frase2.find("ESCOLA", 0), 6, "UNIVERSIDADE") << "\n";
}