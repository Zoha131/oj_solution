/*
 * =====================================================================================
 *
 *       Filename:  1002.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2017 09:21:02 PM
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
#define PI 3.14159

int main()
{
	double radius,result;
	scanf("%lf", &radius);

	printf("A=%.4lf\n", PI*radius*radius);

	return 0;
}

