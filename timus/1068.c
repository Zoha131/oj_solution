/*
 * =====================================================================================
 *
 *       Filename:  1068.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 05:57:57 PM
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
	int a;
	long int res;
	scanf("%d",&a);

	res = a<0? ((abs(a)*(a-1))/2)+1 : (a*(a+1))/2;

	printf("%ld\n",a==0?a+1:res);

	return 0;
}
