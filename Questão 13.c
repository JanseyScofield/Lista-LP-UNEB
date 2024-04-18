/*Faça um algoritmo que implemente uma calculadora de 4 operações. O 
algoritmo deve ler, nessa ordem: o primeiro operando, o operador (+,-,*,/) e o 
segundo operando, e deve escrever o resultado da operação. Por exemplo, se 
o usuário digitar 2,+,3 o algoritmo deve escrever 5.*/

#include <stdio.h>

main(){
	float opr1, opr2, resultado;
	char  operador;
	scanf("%f %c %f", &opr1, &operador, &opr2);
	switch(operador){
		case '+':
			resultado = opr1 + opr2;
			break;
		case '-':
			resultado = opr1 - opr2;
			break;
		case '*':
			resultado = opr1 * opr2;
			break;
		case '/':
			resultado = opr1 / opr2;
	}
	printf("%.6f", resultado);
}
