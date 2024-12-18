/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.
Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.*/

#include <stdio.h>

int main() {

	int cod, quant;
	float preco;
    
    scanf("%d %d", &cod, &quant);
    
	switch (cod) {
	case 1:
		preco = 4 * quant;
		break;
    case 2:
		preco = 4.50 * quant;
		break;
	case 3:
		preco = 5 * quant;
		break;
	case 4:
		preco = 2 * quant;
		break;
	case 5:
		preco = 1.5 * quant;
		break;
	}

    
	printf("Total: R$ %.2f\n", preco);
	
	return 0;
}
