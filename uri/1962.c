/*
 * =====================================================================================
 *
 *       Filename:  1962.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 02:07:46 PM
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
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long int n;
		scanf("%lld", &n);

		if(n<2015)printf("%lld D.C.\n",2015-n);
		else printf("%lld A.C.\n",n-2014);
	}

	return 0;
}
