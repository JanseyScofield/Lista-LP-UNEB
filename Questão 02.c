/* Faça um algoritmo que leia um valor e escreva: 0, se o valor é par; 1, se o valor é ímpar.*/

#include <stdio.h>

main(){
	int num;
	scanf("%d",&num);
	
	if(num == 0)
		printf("0");
	if(num > 0)
		printf("1");
	if(num < 0)
		printf("-1");
}
