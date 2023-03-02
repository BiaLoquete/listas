#include <iostream>

using namespace std;

int maior(int num1, int num2){
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b;

    cout << "Digite o primeiro numero: ";
    cin >> a;

    cout << "Digite o segundo numero: ";
    cin >> b;

    cout << "O maior numero digitado foi: " << maior(a, b) << endl;

    return 0;
}
//Nessa função, é utilizada uma estrutura de controle condicional (if-else) para comparar os dois números recebidos como parâmetros. Se o primeiro número (num1) for maior que o segundo (num2), a função retorna o valor de num1. Caso contrário, a função retorna o valor de num2.

// função é chamada dentro da função main para comparar dois números digitados pelo usuário e exibir o maior deles. 



