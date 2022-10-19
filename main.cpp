// Controle de fluxo, comandos de seleção (Branch)
// If / Else
// Loop while
// for
// switch


#include <cstdio>
#include <cstdlib>
#include <iostream>


using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    //Primeiro argumento
    int nArg1;
    cout << "Enter arg1: ";
    cin >> nArg1;
    //Segundo argumento
    int nArg2;
    cout << "Enter arg2: ";
    cin >> nArg2;

    //Loop while condicional
    int nLoopCount = 0;
    while (nLoopCount <= 10)
    {
        cout << "+>" << nLoopCount << endl;
        nLoopCount++;
    }

    //for
    for(int n = 1; n <= nArg1; n++)
        {
            cout << "AUTO INCREMENTO + 1 NA VARIAVEL (n)" << endl;
        }

    //switch
    switch(nArg2)
    {
    case 2:
    cout << "MEU NUMERO DA SORTE" << endl;
    break;
    case 9:
    cout << "O numero de letra em meu nome igual a 9 (GUILHERME)" << endl;
    break;
    }

    //Condicional If / Else
    if (nArg1 > nArg2)
    {
        cout << "argumento 1 maior que argumento 2"
        << endl;
    }
    else
    {
        cout << "argumento 2 maior que argumento 1"
        << endl;
    }

    cout << "Pressione enter para continuar..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
