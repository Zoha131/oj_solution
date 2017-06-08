/*
 * =====================================================================================
 *
 *       Filename:  2172.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 12:45:29 AM
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
	long long int n,res,t;
	while(scanf("%lld %lld",&t,&n)==2 && n!= 0 && t!=0)
	{
		if(t==1)res = n;
		else res += n;

		printf("%lld\n",res);
	}

	return 0;
}
