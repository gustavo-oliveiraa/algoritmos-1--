/*3. Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
fornecidos pelo usuário.*/
#include<stdio.h>
int main(){
	double A, B, C, MEDIA;
	printf("Digite o numero A:");
	scanf("%lf", &A);
	printf("Digite o numero B:");
	scanf("%lf", &B);
	printf("Digite o numero C:");
	scanf("%lf", &C);
	MEDIA = (A + B + C)/2;
	printf("Numero A: %lf\n", A);
	printf("Numero B: %lf\n", B);
	printf("Numero C: %lf\n", C);
	printf("Media: %lf\n", MEDIA);
	printf("Numero A: %.1lf\nNumero B: %.1lf\nNumero C: %.1lf\nMedia: %.1lf\n", A, B, C, MEDIA);
	return 0;
}
