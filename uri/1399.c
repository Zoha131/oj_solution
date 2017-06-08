/*
 * =====================================================================================
 *
 *       Filename:  1399.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/01/2017 11:46:09 AM
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
	unsigned long long n,m,u,arr[310000],l,r,v,p,i,j,k;
	scanf("%llu %llu %llu", &n,&m,&u);

	for(i=1;i<=n;i++)
	{
		scanf("%llu", &arr[i]);
	}

	for(i=1;i<=m;i++)
	{
		scanf("%llu %llu %llu %llu", &l,&r,&v,&p);
		k = 0;
		for(j=l;j<=r;j++)
		{
			if(arr[j]<v)
			{
				k++;
			}	
		}

		arr[p] = u*k/(r-l+1);
	}

	for(i=1;i<=n;i++)
	{
		printf("%llu\n",arr[i]);
	}

	return 0;
}

