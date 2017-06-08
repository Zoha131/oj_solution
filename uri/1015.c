/*
 * =====================================================================================
 *
 *       Filename:  1015.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2017 07:51:11 PM
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
	float x1,y1,x2,y2;

	scanf("%f %f %f %f", &x1,&y1,&x2,&y2);

	printf("%.4f\n", sqrt(pow((x2-x1),2)+pow((y2-y1),2)) );

	return 0;
}

