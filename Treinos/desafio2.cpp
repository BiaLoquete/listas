#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, quantidade;
	
	cout << "Informe o número para a tabuada: ";
	cin >> numero;
	
	cout << "Informe até quantos você quer que vá: ";
	cin >> quantidade;
	
	for (int x = 0; x <= quantidade; x++){
		cout << numero << " X " << x << " = " << numero * x << endl;
	}
	
}
