/*
 * =====================================================================================
 *
 *       Filename:  1115.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 07:28:10 PM
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
	int i,j;

	while(scanf("%d %d", &i, &j)==2 && i !=0 && j!=0)
	{
		if(i>0)
		{
			if(j>0)
			{
				printf("primeiro\n");
			}
			else
			{
				printf("quarto\n");
			}
		}
		else
		{
			if(j>0)
			{
				printf("segundo\n");
			}
			else
			{
				printf("terceiro\n");
			}
		}
	}

	return 0;
}

