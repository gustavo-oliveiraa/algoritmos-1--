/*Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M), o n�mero de
matr�cula do funcion�rio, o n�mero de horas trabalhadas, o valor que recebe por hora
e calcule o sal�rio desse funcion�rio. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de sa�da.*/
#include<stdio.h>
int main(){
	char NOME[50], SEXO[1];
	int MATRICULA, HORAS; 
	double VALOR, SALARIO;
	printf("Digite o nome do funcionario:\n");
	scanf("%s", &NOME);
	printf("Digite o sexo do funcionario (F ou M):\n");
	scanf("%s", &SEXO);
	printf("Digite a matricula do funcionario:\n");
	scanf("%d", &MATRICULA);
	printf("Digite o numero de horas trabalhadas pelo funcionario:\n");
	scanf("%d", &HORAS);
	printf("Digite o valor que esse funcionario recebe por horas:\n");
	scanf("%lf", &VALOR);
	SALARIO = HORAS * VALOR;
	printf("Nome do funcionario: %s\n", NOME);
	printf("Sexo do funcionario: %s\n", SEXO);
	printf("Numero da matricula: %d\n", MATRICULA);
	printf("Numero de horas trabalhadas: %d\n", HORAS);
	printf("Valor que recebe por horas: R$%.2lf\n", VALOR);
	printf("Salario que recebe: R$%.2lf\n", SALARIO);
	return 0;
}

