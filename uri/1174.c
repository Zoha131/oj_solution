/*
 * =====================================================================================
 *
 *       Filename:  1174.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 06:53:48 PM
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
	int i;
	float arr[100];
	for(i=0;i<100;i++)
	{
		scanf("%f", &arr[i]);
	}

	for(i=0;i<100;i++)
	{
		if(arr[i]<=10)printf("A[%d] = %.1f\n",i,arr[i]);
	}

	return 0;
}
