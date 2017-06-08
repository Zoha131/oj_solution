/*
 * =====================================================================================
 *
 *       Filename:  1060.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 09:35:23 PM
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
	int i, sum = 0;
	float j,avrg;

	for(i=0;i<6;i++)
	{
		scanf("%f",&j);
		if(j>0)
		{
			sum++;
			avrg +=j;
		}
	}

	avrg /=sum;

	printf("%d valores positivos\n%.1f\n",sum,avrg);
	return 0;
}

