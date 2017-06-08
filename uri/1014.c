/*
 * =====================================================================================
 *
 *       Filename:  1014.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2017 07:41:49 PM
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
	int distance;
       	float fuel;

	scanf("%d %f", &distance, &fuel);
	printf("%.3f km/l\n", (distance/fuel));

	return 0;
}

