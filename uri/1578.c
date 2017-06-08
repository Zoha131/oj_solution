/*
 * =====================================================================================
 *
 *       Filename:  1578.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/01/2017 08:45:21 AM
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
	int s,n;
	scanf("%d", &n);
	for(s=0;s<n;s++)
	{
		unsigned long long int arr[25][25],cur;
		int i,j,m,t,k,l,sum,res[25][25];
		double z = .6;
		scanf("%d", &m);
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%llu", &arr[i][j]);
			}
		}
		

		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				arr[i][j]=arr[i][j]*arr[i][j];
				sum = 0;
				cur = arr[i][j];
				while(cur != 0)
				{
					sum++;
					cur /=10;
				}
				res[i][j] = sum;
			}
		}
		for(j=0;j<m;j++)
		{
			res[24][j]=0;
			for(i=0;i<m;i++)
			{
				if(res[i][j]>res[24][j])
				{
					res[24][j]=res[i][j];
				}
			}
		}

		printf("Quadrado da matriz #%d:\n", 4+s);
		for(i=0;i<m;i++)
		{
			printf("%*llu", res[24][0],arr[i][0]);

			for(j=1;j<m;j++)
			{
				printf(" %*llu", res[24][j],arr[i][j]);
			}
			printf("\n");
		}
		if(s!=n-1)
		{	
			printf("\n");
		}

	}
	return 0;
}

