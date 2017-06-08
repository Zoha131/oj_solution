/*
 * =====================================================================================
 *
 *       Filename:  1209_v2.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 11:51:06 PM
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

int main()
{
	const double eps = 0.000001;
	double a,b,c,k,n;
	scanf("%lf",&k);

	k--;
	while(k--)
	{
		scanf("%lf",&n);

		a = (sqrt(8*n-7)-1)/2.0;
		b = modf(a,&c);

		if(b<eps || b> 1-eps)printf("1 ");
		else printf("0 ");
	}
	scanf("%lf",&n);

	a = (sqrt(8*n-7)-1)/2;
	b = modf(a,&c);

	if(b<eps || b> 1-eps)printf("1");
	else printf("0");


	return 0;
}
