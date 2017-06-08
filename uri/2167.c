/*
 * =====================================================================================
 *
 *       Filename:  2167.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/01/2017 09:03:00 PM
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
	int n,arr[150],i,j;
	scanf("%d",&n);
	
	arr[0]=j = 0;

	for(i=1;i<=n;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		if(arr[i-1]>arr[i])
		{
			j=i;
			break;
		}
	}

	printf("%d\n", j);

	return 0;
}

