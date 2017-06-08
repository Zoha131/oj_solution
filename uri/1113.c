/*
 * =====================================================================================
 *
 *       Filename:  1113.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 07:18:31 PM
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
	while(scanf("%d %d", &i, &j)==2 && i!=j)
	{
		if(i>j)
		{
			printf("Decrescente\n");
		}
		else 
		{
			printf("Crescente\n");
		}
	}

	return 0;
}

