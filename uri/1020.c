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
	int time,year,month,day;

	scanf("%d", &time);

	year = time/365;
	time = time % 365;
	month = time/30;
	day = time % 30;

	printf("%d ano\(s\)\n%d mes\(es\)\n%d dia\(s\)\n", year,month,day);
	return 0;
}

