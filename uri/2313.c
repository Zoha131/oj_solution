/*
 * =====================================================================================
 *
 *       Filename:  2313.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 12:09:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);

	if(a+b<=c || b+c<=a || c+a<=b)
	{
		printf("Invalido\n");
		return 0;
	}
	if(a==b && b==c)
	{
		printf("Valido-Equilatero\n");
	}
	else if(a==b || b==c || c==a)
	{
		printf("Valido-Isoceles\n");
	}
	else
	{
		printf("Valido-Escaleno\n");
	}

	if(a*a == b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
	{
		printf("Retangulo: S\n");
	}
	else 
	{
		printf("Retangulo: N\n");
	}

	return 0;
}
