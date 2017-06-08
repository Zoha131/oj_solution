/*
 * =====================================================================================
 *
 *       Filename:  2164.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 12:18:51 AM
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
#include <math.h>

int main()
{
	int n;
	double res;
	scanf("%d", &n);

	res = (pow((1+sqrt(5))/2.0,n) - pow((1-sqrt(5))/2.0,n)) / sqrt(5);

	printf("%.1lf\n", res);

	return 0;
}
