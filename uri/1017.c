/*
 * =====================================================================================
 *
 *       Filename:  1017.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2017 08:07:20 PM
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
	int time, speed;
	scanf("%d %d", &time, &speed);

	printf("%.3f\n", (time*speed)/12.00);

	return 0;
}
