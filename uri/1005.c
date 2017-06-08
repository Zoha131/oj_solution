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
	float val1, val2;
	scanf("%f %f", &val1, &val2);

	printf("MEDIA = %.5f\n", (val1*3.5+val2*7.5)/(3.5+7.5));
	return 0;
}

