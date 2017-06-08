/*
 * =====================================================================================
 *
 *       Filename:  1043.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 06:00:36 PM
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
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);

	if(a<b+c && b<c+a && c<a+b)
	{
		printf("Perimetro = %.1f\n", a+b+c);
	}
	else
	{
		printf("Area = %.1f\n", (c/2)*(a+b));
	}

	return 0;
}

