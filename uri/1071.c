/*
 * =====================================================================================
 *
 *       Filename:  1059.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 09:31:48 PM
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
	int i,j,k,sum=0;
	scanf("%d %d",&k,&j);
	if(j%2==0)j++;
	else j+=2;

	for(i=j;i<k;i+=2)
	{
		sum += i;
	}

	printf("%d\n",sum);

	return 0;
}

