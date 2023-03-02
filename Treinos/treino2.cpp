#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho, sabores, adicional, entrega, presente, pagamento, sabores2, quantidade;
	float valorTamanho, valorTotal;
	
	cout << "Qual o tamanho?\n";
	cout << "1- para pequeno\n";
	cout << "2- para médio\n";
	cout << "3- para grande\n";
	cout << "R: ";
	cin >> tamanho;
	
	system ("cls");
	
	
	cout << "Qual o sabor?\n";
	cout << "1- para chocolate preto\n";
	cout << "2- para chocolate branco\n";
	cout << "3- para chocolate ao leite\n";
	cout << "R: ";
	cin >> sabores;
	
	system ("cls");
	
	cout << "Informe se irá ter 2 sabores\n";
	cout << "1- chocolate preto e chocolate branco\n";
	cout << "2- para chocolate preto e chocolate ao leite\n";
	cout << "3- para chocolate branco e chocolate ao leite\n";
	cout << "4- não\n";
	cout << "R: ";
	cin >> sabores2;
	
	system ("cls");
	
	cout << "Qual o adicional?\n";
	cout << "1- KitKat\n";
	cout << "2- MM's\n";
	cout << "3- os dois\n";
	cout << "4- nenhum\n";
	cout << "R: ";
	cin >> adicional;
	
	system ("cls");
	
	cout << "Vai ser presente?\n?";
	cout << "1- para sim\n";
	cout << "2- para não\n";
	cout << "R: ";
	cin >> presente;
	
	system ("cls");
	
	cout << "Vai ser entrega?\n";
	cout << "1- para sim\n";
	cout << "2- para não\n";
	cout << "R: ";
	cin >> entrega;
	
	system ("cls");
	
	cout << "Qual a forma de pagamento?\n";
	cout << "1- cartão de crédito\n";
	cout << "2- pix ou dinheiro\n";
	cout << "R: ";
	cin >> pagamento;
	
	system ("cls");
	
	cout << "Quantos você irá querer\n?";
	cout << "R: ";
	cin >> quantidade;
	
	system ("cls");
	
	if (tamanho==1){
		valorTamanho = 7.80;
	}else if (tamanho==2){
		valorTamanho = 12.90;
	}else if (tamanho==3){
 	valorTamanho = 23.95;
    }
    
    valorTotal=valorTamanho;
    
    if (sabores==1){
    	valorTotal = valorTotal + 9.67;
	}else if (sabores==2){
		valorTotal = valorTotal + 4.50;
	}else if (sabores==3){
		valorTotal = valorTotal + 9.32;
	}
	
	if (sabores2==1){
		valorTotal = valorTotal + 7.08;
	}else if (sabores2==2){
		valorTotal = valorTotal + 14.33;
	}else if (sabores2==3){
		valorTotal = valorTotal + 9.16;
	}else if (sabores2==4){
		valorTotal = valorTotal;
	}
	
	if (adicional==1){
		valorTotal = valorTotal + 4.67;
	}else if (adicional==2){
		valorTotal = valorTotal + 5.43;
	}else if (adicional==3){
		valorTotal = valorTotal + 10.1;
	}else if (adicional==4){
		valorTotal = valorTotal;
	}
	
	if (presente==1){
		valorTotal = valorTotal + 2.50;
	}else if (presente==2){
		valorTotal = valorTotal;
	}
	
	if (entrega==1){
		valorTotal = valorTotal + 5.00;
	}else if (entrega==2){
		valorTotal = valorTotal;
	}
	
	if (pagamento==1){
		valorTotal = valorTotal + 3.30;
	}else if (pagamento==2){
		valorTotal = valorTotal * 1.10;
	}
	
	if (quantidade==0){
		quantidade = 1;
	}
	
	
	cout << "O valor a ser pago é " <<valorTotal*quantidade;
    
    
    
    
    
    
		

	
}
