/*
 * =====================================================================================
 *
 *       Filename:  1827.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/01/2017 07:48:50 AM
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
	int arr[150][150],n,m,i,j,lst,fst;

	while(scanf("%d", &n)==1)
	{

		
		m =  n/3+1;
		lst = n;
		fst = 1;

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==(n/2+1) && j ==(n/2+1))
				{
					printf("4");
				}
				else if(i>=m && i<=n-m+1 && j>=m && j<=n-m+1)
				{
					printf("1");
				}
				else if(i == j)
				{
					printf("2");
				}
				else if(i==fst && j==lst)
				{
					printf("3");
				}
				else
				{
					printf("0");
				}
			}
			lst--;
			fst++;

			printf("\n");
		}
		printf("\n");
	}

	return 0;
}

