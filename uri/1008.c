/*
 * =====================================================================================
 *
 *       Filename:  1008.c
 *
 *    Description:  salary
 *
 *        Version:  1.0
 *        Created:  03/25/2017 01:06:17 AM
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
	int id, time;
	float rate;

	scanf("%d %d %f", &id, &time, &rate);

	printf("NUMBER = %d\n", id);
	printf("SALARY = U$ %.2f\n", (time*rate));

	return 0;
}

