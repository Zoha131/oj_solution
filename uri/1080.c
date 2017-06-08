/*
 * =====================================================================================
 *
 *       Filename:  1080.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 05:21:54 PM
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
	int i,pos=0,h=0,k;

	for(i=1;i<=100;i++)
	{
		scanf("%d", &k);
		if(h<k)
		{
			h = k;
			pos = i;
		}
	}

	printf("%d\n%d\n",h,pos);
	return 0;
}
