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
	long int i,j,n;
	int in=0, out=0;
	scanf("%ld",&n);

	for(i=0;i<n;i++)
	{
		scanf("%ld",&j);
		if(10<=j && j<=20)in++;
		else out++;
	}

	printf("%d in\n%d out\n",in,out);

	return 0;
}

