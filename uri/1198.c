/*
 * =====================================================================================
 *
 *       Filename:  1198.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 03:36:08 PM
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
	long int a,b;
	while(scanf("%ld %ld",&a,&b) != EOF)
	{
		printf("%ld\n",a>b?a-b:b-a);
	}

	return 0;
}
