/*
 * =====================================================================================
 *
 *       Filename:  2334.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 12:21:28 PM
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
	unsigned long long int p;
	while(scanf("%llu", &p) != EOF && p != -1)
	{
		printf("%llu\n",p==0?p:p-1);
	}

	return 0;
}
