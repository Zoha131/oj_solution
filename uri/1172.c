/*
 * =====================================================================================
 *
 *       Filename:  1172.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 06:40:50 PM
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
	int arr[10],i,temp;
	for(i=0;i<10;i++)
	{
		scanf("%d", &temp);
		if(temp <= 0)arr[i]=1;
		else arr[i] = temp;
	}

	for(i=0;i<10;i++)
	{
		printf("X[%d] = %d\n",i,arr[i]);
	}

	return 0;
}
