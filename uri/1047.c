/*
 * =====================================================================================
 *
 *       Filename:  1047.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 07:35:08 PM
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
	int h1,m1,h2,m2;
	scanf("%d %d %d %d", &h1, &m1, &h2,&m2);

	if(m2>m1)
	{
		if(h2>h1)
		{
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1,m2-m1);
		}
		else
		{
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2+24)-h1,m2-m1);
		}
	}
	else if(m2==m1)
	{
		if(h2>h1)
		{
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1,m2-m1);
		}
		else
		{
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2+24)-h1,m2-m1);
		}

	}
	else
	{
		if(h2>h1)
		{
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2-1)-h1,(m2+60)-m1);
		}
		else
		{
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2+23)-h1,(m2+60)-m1);
		}
	}

	return 0;
}

