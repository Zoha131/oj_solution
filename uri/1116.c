/*
 * =====================================================================================
 *
 *       Filename:  1116.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 07:36:47 PM
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
	int t,i,j;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d",&i,&j);

		if(j==0) printf("divisao impossivel\n");
		else printf("%.1f\n", (float)i/j);
	}

	return 0;
}

