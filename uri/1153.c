/*
 * =====================================================================================
 *
 *       Filename:  1153.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 12:46:18 AM
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
int fact(int a)
{
	if(a==1)return 1;
	else return a*fact(a-1);
}

int main()
{
	int a;
	scanf("%d", &a);

	printf("%d\n",fact(a));

	return 0;
}

