/*Construa um algoritmo que leia um n�mero inteiro de horas e mostre ao usu�rio o
correspondente em minutos e segundos destas horas.*/
#include<stdio.h>
int main(){
	int HORA, MINUTOS, SEGUNDOS;	
	printf("Digite a hora:");
	scanf("%d", &HORA);
	MINUTOS = HORA * 60;
	SEGUNDOS= MINUTOS * 60;
	printf("Minutos: %d\n", MINUTOS);
	printf("Sgunfos: %d\n", SEGUNDOS);
	return 0;
}

