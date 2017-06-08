/*
 * =====================================================================================
 *
 *       Filename:  1044.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 06:06:09 PM
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
	int a,b;
	scanf("%d %d", &a, &b);

	if(b%a==0 || a%b==0)
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		printf("Nao sao Multiplos\n");
	}

	return 0;
}

