/*
 * =====================================================================================
 *
 *       Filename:  1149.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 12:07:42 AM
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
	int i,a,n,sum=0;

	scanf("%d", &a);
	do
	{
		scanf("%d",&n);
	}
	while(n<=0);

	for(i=0;i<n;i++)
	{
		sum += (a+i);
	}

	printf("%d\n",sum);

	return 0;
}

