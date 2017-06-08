/*
 * =====================================================================================
 *
 *       Filename:  1180.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 09:00:06 PM
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
	int arr[1000],n,i,low,ind;
	scanf("%d", &n);
	scanf("%d", &arr[0]);
	low = arr[0];
	ind = 0;
	for(i=1;i<n;i++)
	{
		scanf("%d", &arr[i]);
		if(low>arr[i])
		{
			low = arr[i];
			ind = i;
		}
	}

	printf("Menor valor: %d\nPosicao: %d\n",low,ind);

	return 0;
}
