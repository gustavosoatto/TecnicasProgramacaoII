#include <iostream>
using namespace std;

struct ponto
{
    int x;
    int y;
};
typedef struct ponto ponto;

void vetor10X10()
{
    ponto vetor[10];
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        *(vetor + i) = {rand() % 100, rand() % 100};
        cout << (*(vetor + i)).x << endl; // Sintax de "." geralmente usado após os "[]".
        cout << (vetor + i)->y << endl;   // Sintax de "->" geralmente usada para ponteiros.
    }
}

int main()
{
    vetor10X10();
}