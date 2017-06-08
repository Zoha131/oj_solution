/*
 * =====================================================================================
 *
 *       Filename:  1478.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/01/2017 11:14:13 AM
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
	int t;
	while(scanf("%d", &t)==1 && t!=0)
	{
		int arr[150][150],fst=0,lst=t,i,j;

		for(i=1;i<=t;i++)
		{
			fst=1;
			for(j=i;j<=t;j++)
			{
				arr[i][j]=fst;
				arr[j][i]=fst;
				fst++;
			}
		}

		for(i=1;i<=t;i++)
		{
			printf("%*d",3, arr[i][1]);
			for(j=2;j<=t;j++)
			{
				printf(" %*d",3, arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

