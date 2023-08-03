#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0, diagPri = 0, diagSec = 0, diagPriSoma = 0, diagSecSoma = 0, eixo = 0;
    cout << "Digite o tamanho da matriz";
    cin >> eixo;

    for (int i = 0; i < eixo; i++)
    {
        x = i + 1;
        int j = 0;
        diagPri = x;
        diagPriSoma = diagPri + diagPriSoma;
        diagSec = eixo - i;
        diagSecSoma = diagSec + diagSecSoma;
        cout << "Diagonal Principal [ " << diagPri << "]" << endl;
        cout << "Diagonal Secundária [ " << diagSec << "]" << endl;

        for (int j = 0; j < eixo; j++)
        {
            y = j + 1;
            cout << "Matriz [ " << x << "],[ " << y << "]" << endl;
        }
    }
    cout << "Soma da diagonal Principal [ " << diagPriSoma << "]" << endl;
    cout << "Soma da diagonal Secundária [ " << diagSecSoma << "]" << endl;
}
