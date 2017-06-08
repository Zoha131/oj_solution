/*
 * =====================================================================================
 *
 *       Filename:  1101.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 06:59:15 PM
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
	int m,n,sum,i;
	
	while(scanf("%d %d", &m, &n)==2 && m >0 && n> 0)
	{
		sum = 0;
		if(n>m)
		{
			n = n^m;
			m = n^m;
			n = n^m;	
		}

		for(i=n;i<=m;i++)
		{
			printf("%d ",i);
			sum +=i;
		}

		printf("Sum=%d\n",sum);
	}

	return 0;
}

