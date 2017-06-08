/*
 * =====================================================================================
 *
 *       Filename:  1050.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 08:47:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zoha
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	if(a==61)
	{
		printf("Brasilia\n");
	}
	else if(a==71)
	{
		printf("Salvador\n");
	}
	else if(a==11)
	{
		printf("Sao Paulo\n");
	}
	else if(a==21)
	{
		printf("Rio de Janeiro\n");
	}
	else if(a==32)
	{
		printf("Juiz de Fora\n");
	}
	else if(a==19)
	{
		printf("Campinas\n");
	}
	else if(a==27)
	{
		printf("Vitoria\n");
	}
	else if(a==31)
	{
		printf("Belo Horizonte\n");
	}
	else 
	{
		printf("DDD nao cadastrado\n");
	}

	return 0;
}

