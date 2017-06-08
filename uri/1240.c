/*
 * =====================================================================================
 *
 *       Filename:  1240.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 04:14:24 PM
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

int main()
{
	long int a,b;
	int t;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%ld %ld",&a,&b);
		int flag = 1;

		while(b!=0)
		{
			if(a%10 != b%10)
			{
				flag=0;
				break;
			}
			a/=10;
			b/=10;
		}

		if(flag)printf("encaixa\n");
		else printf("nao encaixa\n");
	}
	return 0;
}
