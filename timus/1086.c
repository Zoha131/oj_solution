/*
 * =====================================================================================
 *
 *       Filename:  1086.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 09:38:55 PM
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
#include <math.h>

long int nums[1000000],prm[20000],nprm=1;

void sieve(int n)
{
	int i,j,m,limit=sqrt(n)+2;

	nums[2]= 2;

	for(i=2;i<=n;i++)
	{
		if(nums[i] != 1)
		{
			prm[nprm++] = i;

			if(i<=limit)
			{
				m=i+1;
				for(j=i*i;j<=n;j=i*m,m++)
				{
					nums[j]=1;
				}
			}
		}
	}
}

int main()
{
	//initializing nprim
	sieve(200000);

	//solving the prob
	int k,n;
	scanf("%d",&k);

	while(k--)
	{
		scanf("%d", &n);
		printf("%ld\n",prm[n]);
	}

	return 0;

}
