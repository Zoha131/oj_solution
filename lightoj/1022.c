/*
 * =====================================================================================
 *
 *       Filename:  1022.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/21/2017 11:29:37 AM
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
	const double pi = 2*acos(0.0);
	int t,s;
	scanf("%d",&t);
	for(s=1;s<=t;s++)
	{
		double r;
		scanf("%lf",&r);

		printf("Case %d: %.2lf\n",s,pow(2*r,2)-pi*pow(r,2));
	}

	return 0;

}
