/*
 * =====================================================================================
 *
 *       Filename:  1534.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/06/2017 11:37:22 PM
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
	int t,i,j;
	while(scanf("%d", &t)==1)
	{
		for(i=1;i<=t;i++)
		{
			for(j=1;j<=t;j++)
			{
				if(j==(t-i)+1) printf("2");
				else if(i==j)printf("1");
				else printf("3");
			}
			printf("\n");
		}
	}

	return 0;
}
