/*
 * =====================================================================================
 *
 *       Filename:  1164.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 06:27:28 PM
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
	int t, n, z,i, sum, r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		z = n;
		sum =0;
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)sum+=i;
		}
		
		if(sum== n)
		{
			printf("%d eh perfeito\n",n);
		}
		else
		{
			printf("%d nao eh perfeito\n",n);
		}
	}
	return 0;
}


