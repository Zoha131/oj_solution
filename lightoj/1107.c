/*
 * =====================================================================================
 *
 *       Filename:  1107.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  05/14/2017 04:20:20 PM
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
	int x1,y1,x2,y2,x,y,t,s,limit,i;

	scanf("%d", &t);
	for(s=1;s<=t;s++)
	{
		scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
		scanf("%d", &limit);

		printf("Case %d:\n",s);

		while(limit--)
		{
			scanf("%d %d",&x,&y);
			if((x>x1 && x<x2) && (y>y1 && y<y2))
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}

	return 0;
}
