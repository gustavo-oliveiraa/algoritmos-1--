/*4. Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o
quociente da divis�o do primeiro pelo segundo n�mero.
� Lembre-se das express�es aritm�ticas:
1. mod ? m mod i: resto da divis�o de m por i
2. (\) ? m \ i: quociente da divis�o de m por i
Exemplo: 5 mod 2 � 1
 5 \ 2 � 2*/
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
