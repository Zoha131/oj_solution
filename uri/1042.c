/*
 * =====================================================================================
 *
 *       Filename:  1042.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 05:49:19 PM
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
	int a,b,c,arr[3],i,j;

	scanf("%d %d %d", &a,&b, &c);
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;

	for(i=0;i<3-1;i++)
	{
		for(j=0;j<3-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j] = arr[j]^arr[j+1];
				arr[j+1] = arr[j]^arr[j+1];
				arr[j] = arr[j]^arr[j+1];
			}
		}
	}

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",arr[0], arr[1], arr[2],a,b,c);

	return 0;
}

