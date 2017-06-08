/*
 * =====================================================================================
 *
 *       Filename:  1132.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2017 10:25:34 PM
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

int main()
{
	long int i,j,sum=0,s;
	scanf("%ld %ld", &i,&j);
	if(i>j)
	{
		i = i^j;
		j = i^j;
		i = i^j;
	}

	for(s=i;s<=j;s++)
	{
		if(s%13)
		{
			sum+=s;
		}
	}

	printf("%ld\n",sum);

	return 0;
}

