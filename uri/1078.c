/*
 * =====================================================================================
 *
 *       Filename:  1078.c
 *
 *    Description:  thugliffe
 *
 *        Version:  1.0
 *        Created:  04/04/2017 05:07:59 PM
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
	int a,i;
	scanf("%d", &a);

	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",i,a,i*a);
	}

	return 0;
}

