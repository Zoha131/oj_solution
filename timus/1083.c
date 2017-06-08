/*
 * =====================================================================================
 *
 *       Filename:  1083.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 06:41:48 PM
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
#include <string.h>

int main()
{
	int a,b;
	long long int res=1;
	char arr[50];
	scanf("%d %s", &a,arr);
	b = strlen(arr);
	while(a>0)
	{
		res *= a;
		a-=b;
	}

	printf("%lld\n",res);

	return 0;
}
