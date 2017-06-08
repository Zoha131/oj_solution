/*
 * =====================================================================================
 *
 *       Filename:  2152.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/13/2017 08:54:29 PM
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
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int h,m,flag;
		scanf("%d %d %d", &h, &m, &flag);
		
		if(flag)
		{
			printf("%.2d:%.2d - A porta abriu!\n",h,m);
		}
		else
		{
			printf("%.2d:%.2d - A porta fechou!\n",h,m);
		}
	}

	return 0;
}
