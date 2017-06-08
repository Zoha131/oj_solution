/*
 * =====================================================================================
 *
 *       Filename:  1146.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 11:02:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: zoha
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x,i;
	while(scanf("%d", &x)==1 && x>0)
	{
		printf("1");
		for(i=2;i<=x;i++)
		{
			printf(" %d", i);
		}
		printf("\n");
	}

	return 0;
}

