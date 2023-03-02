#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	do {
		cout << "Informe o dígito do mês: ";
	    cin >> mes;
	    
	    switch(mes){
	    	case 0: cout << "Saindo do programa";
	    	break;
	    	case 1: cout << "Janeiro\n";
	    	break;
	    	case 2: cout << "Fevereiro\n";
	    	break;
	    	case 3: cout << "Março\n";
	    	break;
	    	case 4: cout << "Abril\n";
	    	break;
	    	case 5: cout << "Maio\n";
	    	break;
	    	case 6: cout << "Junho\n";
	    	break;
	    	case 7: cout << "Julho\n";
	    	break;
	    	case 8: cout << "Agosto\n";
	    	break;
	    	case 9: cout << "Setembro\n";
	    	break;
	    	case 10: cout << "Outubro\n";
	    	break;
	    	case 11: cout << "Novembro\n";
	    	break;
	    	case 12: cout << "Dezembro\n";
	    	break;
	    	default: cout << "Informe um mes válido\n"; //isso é para que se a pessoa digitar um numero que nao esta mencionado no CASE, apareça uma mensagem avisando
	}
		
	}while(mes != 0); //se for diferente de 0, vai executando normalmente. Se for 0, vai parar
	
}
