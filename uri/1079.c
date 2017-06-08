/*
 * =====================================================================================
 *
 *       Filename:  1079.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 05:11:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zoha
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int t,i;
	float a,b,c;
	scanf("%d", &t);

	for(i=0;i<t;i++)
	{
		scanf("%f %f %f",&a,&b,&c);
		printf("%.1f\n", (a*2+b*3+c*5)/(2+3+5));
	}

	return 0;
}

