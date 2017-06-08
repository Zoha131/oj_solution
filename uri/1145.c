/*
 * =====================================================================================
 *
 *       Filename:  1145.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 10:54:21 PM
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
	int x,y,i,j,l=1;
	scanf("%d %d",&x,&y);

	for(i=1;i<=y;i+=x)
	{
		printf("%d",l++);
		for(j=2;j<=x && l<=y;j++)
		{
			printf(" %d",l++);
		}
		printf("\n");
	}

	return 0;
}

