#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, quantidade;
	
	cout << "Informe o n�mero para a tabuada: ";
	cin >> numero;
	
	cout << "Informe at� quantos voc� quer que v�: ";
	cin >> quantidade;
	
	for (int x = 0; x <= quantidade; x++){
		cout << numero << " X " << x << " = " << numero * x << endl;
	}
	
}
