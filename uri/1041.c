/*
 * =====================================================================================
 *
 *       Filename:  1041.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 05:36:30 PM
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
	float x,y;

	scanf("%f %f", &x, &y);

	if(x==0.0)
	{
		if(y==0.0)
		{
			printf("Origem\n");
		}
		else
		{
			printf("Eixo Y\n");
		}
	}
	else if(y==0.0)
	{
		printf("Eixo X\n");
	}
	else if(x>0)
	{
		if(y>0)
		{
			printf("Q1\n");
		}
		else
		{
			printf("Q4\n");
		}
	}
	else if(x<0)
	{
		if(y>0)
		{
			printf("Q2\n");
		}
		else
		{
			printf("Q3\n");
		}
	}

	return 0;
}

