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
//Nessa fun��o, � utilizada uma estrutura de controle condicional (if-else) para comparar os dois n�meros recebidos como par�metros. Se o primeiro n�mero (num1) for maior que o segundo (num2), a fun��o retorna o valor de num1. Caso contr�rio, a fun��o retorna o valor de num2.

// fun��o � chamada dentro da fun��o main para comparar dois n�meros digitados pelo usu�rio e exibir o maior deles. 



