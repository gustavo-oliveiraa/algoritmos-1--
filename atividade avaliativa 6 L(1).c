/*6. Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.*/
#include<stdio.h>
int main(){
	double A, B, MEDIA;
	printf("Digite a nota A:");
	scanf("%lf", &A);
	printf("Digite a nota B:");
	scanf("%lf", &B);
	MEDIA = (A * 3.5 + B * 7.5)/10;
	printf("Nota A: %.3lf\n", A);
	printf("Nota B: %.3lf\n", B);
	printf("Media: %.3lf\n", MEDIA);
	return 0; 
	}

