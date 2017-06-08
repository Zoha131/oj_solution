/*
 * =====================================================================================
 *
 *       Filename:  2235.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 11:58:42 AM
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
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);

	if(a==b || b==c || c==a || a+b==c || b+c==a || c+a==b )printf("S\n");
	else printf("N\n");

	return 0;
}
