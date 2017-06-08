/*
 * =====================================================================================
 *
 *       Filename:  1019.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2017 08:55:13 PM
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
	int time, hours,minutes,sec;

	scanf("%d", &time);

	hours = time/3600;
	time = time % 3600;
	minutes = time/60;
	sec = time % 60;

	printf("%d:%d:%d\n", hours, minutes,sec);
	return 0;
}

