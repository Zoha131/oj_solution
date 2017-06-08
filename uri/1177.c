/*
 * =====================================================================================
 *
 *       Filename:  1177.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 07:20:39 PM
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
	int i,j,n;
	scanf("%d", &n);
	for(i=0,j=0;i<1000;i++,j++)
	{
		if(j==n)j=0;
		printf("N[%d] = %d\n",i,j);
	}

	return 0;
}
