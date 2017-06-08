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
#include <math.h>

int main()
{
	int t;
	while(scanf("%d", &t)==1 && t!=0)
	{
		int arr[150][150],fst=0,lst=t,i,j,big=0,fmt;

		for(i=1;i<=t;i++)
		{
			fst=pow(4,i-1);
			for(j=i;j<=t;j++)
			{
				arr[i][j]=fst;
				arr[j][i]=fst;
				if(fst>big)
				{
					big = fst;
				}
				fst *=2;
			}
		}

		for(fmt=0;big!=0;big/=10,fmt++);

		for(i=1;i<=t;i++)
		{
			printf("%*d",fmt, arr[i][1]);
			for(j=2;j<=t;j++)
			{
				printf(" %*d",fmt, arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

