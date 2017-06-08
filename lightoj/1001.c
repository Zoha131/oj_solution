/*
 * =====================================================================================
 *
 *       Filename:  1001.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/17/2017 10:39:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
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
		scanf("%d",&i);

		if(i>10)printf("10 %d\n",i-10);
		else printf("0 %d\n",i);
	}

	return 0;
}
