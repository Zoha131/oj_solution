/*
 * =====================================================================================
 *
 *       Filename:  1589.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 12:03:17 AM
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
	int r1,r2,t;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &r1,&r2);
		printf("%d\n",r1+r2);
	}

	return 0;
}
