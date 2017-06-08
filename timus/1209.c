/*
 * =====================================================================================
 *
 *       Filename:  1209.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 10:53:02 PM
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

int arr[70005];

int main()
{
	//initializing the array
	int i,j=0;
	for(i=0,j=1;i+j<70005;j=i+j,i++)
	{
		arr[j] = 1;
	}

	long int t,n;
	scanf("%ld %ld",&t,&n);
	printf("%d",arr[n]);
	t--;
	while(t--)
	{
		scanf("%ld",&n);
		printf(" %d",arr[n]);
	}

	printf("\n");

	return 0;
}
