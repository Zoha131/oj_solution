/*
 * =====================================================================================
 *
 *       Filename:  1789.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 12:15:54 AM
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
	int l,grtr,i,temp;
	while(scanf("%d", &l)==1)
	{
		grtr = 0;
		for(i=0;i<l;i++)
		{
			scanf("%d",&temp);
			if(grtr<temp)grtr = temp;
		}

		if(grtr<10)printf("1\n");
		else if(grtr>=10 && grtr<20)printf("2\n");
		else printf("3\n");
	}
}
