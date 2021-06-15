/*4. Construa um algoritmo que a partir da leitura de dois números forneça o resto e o
quociente da divisão do primeiro pelo segundo número.
– Lembre-se das expressões aritméticas:
1. mod ? m mod i: resto da divisão de m por i
2. (\) ? m \ i: quociente da divisão de m por i
Exemplo: 5 mod 2 é 1
 5 \ 2 é 2*/
#include<stdio.h>
 int main(){
 	int A, B, RESULTADO;
	printf("Digite o numero A:\n");
 	scanf("%d", &A);
 	printf("Digite o numero B:\n");
 	scanf("%d", &B);
 	RESULTADO = A % B;
 	printf("Numero de A:%d\n", A);
 	printf("Numero de B:%d\n", B);
 	printf("resultado da divisao:%d\n", RESULTADO);
 	return 0;
 }
