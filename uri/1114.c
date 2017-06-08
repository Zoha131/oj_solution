/*
 * =====================================================================================
 *
 *       Filename:  1114.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 07:22:48 PM
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
	int i;
	while(scanf("%d", &i)==1 && i !=2002)
	{
		printf("Senha Invalida\n");
	}

	printf("Acesso Permitido\n");

	return 0;
}

