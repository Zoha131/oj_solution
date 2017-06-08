/*
 * =====================================================================================
 *
 *       Filename:  1143.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 10:41:58 PM
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
	int i,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++)printf("%d %d %d\n",i,i*i,i*i*i);
	return 0;
}

