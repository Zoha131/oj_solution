/*
 * =====================================================================================
 *
 *       Filename:  1013.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2017 07:35:32 PM
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

int greater(int a, int b)
{
	return ((a+b+abs(a-b))/2);
}

int main()
{
	int a,b,c,result;
	scanf("%d %d %d", &a, &b, &c);

	result = greater(a,b);
	printf("%d eh o maior\n", greater(result,c));

	return 0;
}

