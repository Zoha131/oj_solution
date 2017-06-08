/*
 * =====================================================================================
 *
 *       Filename:  1156.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 01:24:37 AM
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
	int i,j;
	float sum=0;

	for(i=1,j=1;i<=39;i+=2,j*=2)
	{
		sum += (float)i/j;
	}

	printf("%.2f\n",sum);
	return 0;
}
