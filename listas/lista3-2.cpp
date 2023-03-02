#include <iostream>

using namespace std;

int soma(int num1, int num2){
    int result = num1 + num2;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    int a, b;

    cout << "Digite o primeiro numero: ";
    cin >> a;

    cout << "Digite o segundo numero: ";
    cin >> b;

    cout << "A soma dos valores é: " << soma(a,b) << endl;

    return 0;
}
