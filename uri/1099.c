/*
 * =====================================================================================
 *
 *       Filename:  1099.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 06:45:17 PM
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
	scanf("%d", &t);

	while(t--)
	{
		int i,k,l,sum=0;
		scanf("%d %d",&k,&l);
		if(k>l)
		{
			k = k^l;
			l = k^l;
			k = k^l;
		}

		if(k%2==0)k++;
		else k+=2;
		for(i=k;i<l;i+=2)sum+=i;

		printf("%d\n",sum);
	}

	return 0;
}

