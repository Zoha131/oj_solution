/*
 * =====================================================================================
 *
 *       Filename:  1866.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 09:44:42 AM
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
	int n,x;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &x);
		printf("%d\n",(x-x/2)-(x/2));
	}

	return 0;
}
