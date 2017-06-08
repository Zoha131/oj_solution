/*
 * =====================================================================================
 *
 *       Filename:  1046.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 07:24:30 PM
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
	int a,b;
	scanf("%d %d", &a, &b);

	if(a<b)
	{
		printf("O JOGO DUROU %d HORA(S)\n",b-a);
	}
	else
	{
		printf("O JOGO DUROU %d HORA(S)\n",(b+24)-a);
	}

	return 0;
}

