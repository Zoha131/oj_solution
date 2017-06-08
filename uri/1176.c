/*
 * =====================================================================================
 *
 *       Filename:  1151.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 12:29:16 AM
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
unsigned long long int arr[60];

unsigned long long int fib(int a)
{
	if (arr[a] || a==0) return arr[a];
	else
	{

		arr[a] = fib(a-1)+fib(a-2);
		return arr[a];

	}
}

int main()
{
	int i,n,temp;
	scanf("%d", &n);
	arr[0]= 0;
	arr[1]=1;

	for(i=0;i<n;i++)
	{
		scanf("%d", &temp);
		printf("Fib(%d) = %llu\n",temp, fib(temp));
	}


	return 0;
}

