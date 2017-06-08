/*
 * =====================================================================================
 *
 *       Filename:  1161.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 12:56:40 PM
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
long long int fact(int a)
{
	if(a==1 ||a==0)return 1;
	else return a*fact(a-1);
}

int main()
{
	int m,n,i,j,sum;
	while(scanf("%d %d", &m, &n)==2)
	{
		sum = 0;
		printf("%lld\n",fact(m)+fact(n));
	}

	return 0;
}
