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
	if(j%2==0)j++;

	for(i=0;i<6;i++)
	{
		printf("%d\n",j);
		j+=2;
	}

	return 0;
}

