/*
 * =====================================================================================
 *
 *       Filename:  1212.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 03:44:10 PM
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
	long long int a,b;
	while(scanf("%lld %lld",&a,&b)==2 && a!=0 && b!=0)
	{
		int res=0,flag=0;
		while(a!=0 && b!=0)
		{
			if(a%10+b%10+flag>=10)
			{
				res++;
				flag=1;
			}
			else flag=0;
			a/=10;
			b/=10;
		}

		if(a !=0 && a%10+flag>=10)res++;
		else if(b!=0 && b%10+flag>=10) res++;

		if(res==0)printf("No carry operation.\n");
		else if(res==1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n",res);
	}

	return 0;
}
