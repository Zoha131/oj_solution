/*
 * =====================================================================================
 *
 *       Filename:  2006.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 10:44:08 PM
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
	int t,temp,res=0,i;
	scanf("%d", &t);

	for(i=0;i<5;i++)
	{
		scanf("%d", &temp);
		if(t==temp)res++;
	}

	printf("%d\n", res);
	return 0;
}
