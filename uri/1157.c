/*
 * =====================================================================================
 *
 *       Filename:  1157.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 01:28:48 AM
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
	int i,n;
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
	}

	return 0;
}

