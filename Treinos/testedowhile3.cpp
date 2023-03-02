#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	int valorInteiro;
	int count = 0;
	
	do{
		cout << "Informe um valor inteiro positivo: ";
	    cin >> valor;
	    
	    if (valor>=0){
	       valorInteiro += valor;
	       count++;
	    }
	
	}while (valor >= 0);
	
	if (count == 0) {
		cout << "Nenhum número foi digitado!" << endl;
	}else{
		cout << "O valor inteiro somado foi de: " <<valorInteiro << endl;
	}
}
