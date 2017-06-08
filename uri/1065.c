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
	int i, sum = 0,j;

	for(i=0;i<5;i++)
	{
		scanf("%d",&j);
		if(j%2==0)sum++;
	}

	printf("%d valores pares\n",sum);
	return 0;
}

