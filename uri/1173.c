/*
 * =====================================================================================
 *
 *       Filename:  1173.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 06:47:03 PM
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
	int n,i;
	scanf("%d", &n);

	for(i=0;i<10;i++)
	{
		printf("N[%d] = %d\n",i,n);
		n*=2;
	}

	return 0;
}
