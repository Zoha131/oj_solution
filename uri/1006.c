/*
 * =====================================================================================
 *
 *       Filename:  1005.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2017 10:08:59 PM
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
	float val1, val2,val3;
	scanf("%f %f %f", &val1, &val2, &val3);

	printf("MEDIA = %.1f\n", (val1*2+val2*3+val3*5)/(2+3+5));
	return 0;
}

