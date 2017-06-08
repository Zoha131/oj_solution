/*
 * =====================================================================================
 *
 *       Filename:  1059.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 09:31:48 PM
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
	scanf("%d",&j);
	//if(j%2)j++;

	for(i=2;i<=j;i+=2)
	{
		printf("%d^2 = %d\n",i,i*i);
	}

	return 0;
}

