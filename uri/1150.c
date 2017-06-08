/*
 * =====================================================================================
 *
 *       Filename:  1150.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 12:23:19 AM
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
	int x,z,i,sum=0;

	scanf("%d", &x);

	do
	{
		scanf("%d", &z);
	}
	while(z<=x);

	for(i=0;sum<=z;i++)
	{
		sum += (x+i);
	}

	printf("%d\n",i);

	return 0;
}

