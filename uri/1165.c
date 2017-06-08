/*
 * =====================================================================================
 *
 *       Filename:  1165.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 06:33:25 PM
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
	long int n,i,flag,x;

	scanf("%ld", &n);
	while(n--)
	{
		scanf("%ld",&x);
		flag = 1;
		for(i=2;i<=x/2;i++)
		{
			if(x%i==0)
			{
				flag=0;
				break;
			}
		}

		if(flag)printf("%ld eh primo\n", x);
		else printf("%ld nao eh primo\n",x);
	}

	return 0;
}

