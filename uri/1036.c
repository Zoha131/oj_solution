/*
 * =====================================================================================
 *
 *       Filename:  1036.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2017 12:59:06 AM
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
	float a,b,c,mid, r1,r2;

	scanf("%f %f %f", &a, &b, &c);

	mid = pow(b,2) - 4*a*c;

	if(mid<0 ||a == 0)
	{
		printf("Impossivel calcular\n");
		return 0;
	}

	r1 = (-b+sqrt(mid))/(2*a);
	r2 = (-b-sqrt(mid))/(2*a);

	printf("R1 = %.5f\nR2 = %.5f\n", r1,r2);

	return 0;

	
}

