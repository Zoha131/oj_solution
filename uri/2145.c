/*
 * =====================================================================================
 *
 *       Filename:  2145.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/12/2017 08:59:01 PM
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
	while(scanf("%d", &t)==1 & t!=0)
	{
		int i,n;
		for(i=0;i<t;i++)
		{
			scanf("%d",&n);
			printf("%d\n",2*n - 1);
		}
	}

	return 0;
}
