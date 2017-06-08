/*
 * =====================================================================================
 *
 *       Filename:  1142.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 10:37:33 PM
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
	int i=1,j=2,k=3,n;
	scanf("%d", &n);

	while(n--)
	{
		printf("%d %d %d PUM\n",i,j,k);
		i+=4;
		j+=4;
		k+=4;
	}

	return 0;
}

