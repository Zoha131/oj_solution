/*
 * =====================================================================================
 *
 *       Filename:  1178.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 07:30:38 PM
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
	int i,j;
	double x;
	scanf("%lf", &x);
	for(i=0;i<100;i++,x/=2)printf("N[%d] = %.4lf\n",i,x);

	return 0;
}
