/*
 * =====================================================================================
 *
 *       Filename:  2003.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 10:15:07 PM
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
	int hour,minute,m,h;
	
	while(scanf("%d:%d",&hour,&minute)==2)
	{
		hour++;
		
		h = hour-8;
		minute = h*60+minute;
		m = minute>0?minute:0;
		
		//printf("%d %d %d %d\n",hour,minute,h,m);	
		printf("Atraso maximo: %d\n",m);
	}

	return 0;
}
