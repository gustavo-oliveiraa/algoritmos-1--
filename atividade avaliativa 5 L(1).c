/*5. Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
construtor tem a quantidade total de fios em metros a serem utilizados na instalação
elétrica da obra e que cada rolo de fio tem 50 metros.*/
#include<stdio.h>
int main(){
	int METROS, ROLOS, AVULSOS;
	printf("Digite o total de metros a serem usados:\n");
	scanf("%d", &METROS);
	ROLOS = METROS/50;
	AVULSOS = METROS%50;
	printf("E necessario adquirir %d rolos.\n", ROLOS);
	printf("E adquirir %d metros avulsos.\n", AVULSOS);
	return 0;
}
