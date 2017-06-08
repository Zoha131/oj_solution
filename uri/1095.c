/*
 * =====================================================================================
 *
 *       Filename:  1095.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 05:43:38 PM
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
	int i,j;

	for(i=1,j=60;j>=0;i+=3,j-=5)
	{
		printf("I=%d J=%d\n",i,j);
	}

	return 0;
}

