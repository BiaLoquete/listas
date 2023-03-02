#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

//indice++ vai me retornar o valor de indice no momento em que é chamado e depois incrementar esse valor
    for (int i = 1; i <= 100; i++) {
        if (num * i < 100) {
            cout << num * i << " ";
        } else {
            break;
        }
    }

    cout << endl;

    return 0;
}
