/*
 * cesar.c
 *
 *  Created on: 01/10/2013
 *      Author: jmorales
 */

#include <stdio.h>
#include <string.h>
#define MAX 500

void main(){
	char string[MAX],string2[MAX];
	char c;
	int dim=0,i=0,movimiento=0;
	printf("Movimiento:");
	scanf("%d",&movimiento);
	getchar();
	printf("Dime la frase a mover:");
	gets(string);
	puts(string);
	dim=strlen(string);
	while (i!=dim){
		c = string[i]+movimiento;
		string2[i] = c;
		i++;
	}
	if (i>=dim){
		string2[i]='\0';
	}
	puts(string2);
}

