/*
 * =====================================================================================
 *
 *       Filename:  2057.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 11:13:11 PM
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
	int a,b,c,res;
	scanf("%d %d %d",&a,&b,&c);
	res = a+b+c;

	if(res<0)res = 24+res;
	else if(res>24) res = res-24;
	else if(res==24) res = 0;

	printf("%d\n",res);

	return 0;
}
