/*2. Construa um algoritmo que calcule a �rea de um c�rculo cujo raio � fornecido pelo
usu�rio (use �rea= 3.14 x raio2)*/
#include<stdio.h>
int main(){
	double RAIO, AREA;
	printf("Digite o valor do raio:\n");
	scanf("%lf", &RAIO);
	AREA = 3.14 * RAIO * RAIO;
	printf("Valor do raio: %lf\n", RAIO);
	printf("Valor da area: %lf\n", AREA);
	return 0;
}
