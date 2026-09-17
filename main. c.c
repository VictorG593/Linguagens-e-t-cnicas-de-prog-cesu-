#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

float reais, cotacao, dolar;
	
	printf("Digite o valor em reais: \n");
	scanf("%f", &reais);

	printf("Digite a cotacao do dolar: \n");
	scanf("%f", &cotacao);
	
	dolar = reais/cotacao;
	
	printf("O valor de %f reais, em dolar e: %f\n", reais, dolar);
	return 0 ;
}
