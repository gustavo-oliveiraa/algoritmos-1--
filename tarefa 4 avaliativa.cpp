/*Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o
quociente da divis�o do primeiro pelo segundo n�mero.
� Lembre-se das express�es aritm�ticas:
1. mod ? m mod i: resto da divis�o de m por i
2. (\) ? m \ i: quociente da divis�o de m por i
Exemplo: 5 mod 2 � 1
 5 \ 2 � 2*/
 #include<stdio.h>
 int main(){
 	double A, B, RESULTADO;
	printf("Digite o numero A:\n");
 	scanf("%lf", &A);
 	printf("Digite o numero B:\n");
 	scanf("%lf", &B);
 	RESULTADO = A/B;
 	printf("Numero de A:%lf\n", A);
 	printf("Numero de B:%lf\n", B);
 	printf("resultado da divisao:%lf\n", RESULTADO);
 	return 0;
 }
