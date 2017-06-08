/*
 * =====================================================================================
 *
 *       Filename:  1435.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/01/2017 08:20:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zoha
 *   Organization:  
 *
 * =====================================================================================
 */	
#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	while(scanf("%d", &t)==1 && t!=0)
	{
		int arr[150][150],fst=1,lst=t,i,j,val=0;

		for(i=1;i<=(t+1)/2;i++)
		{
			val=val+1;
			for(j=fst;j<=lst;j++)
			{
				arr[fst][j]=val;
				arr[j][fst]=val;	
				arr[lst][j]=val;
				arr[j][lst]=val;
			}
			fst++;
			lst--;
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

