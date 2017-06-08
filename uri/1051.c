/*
 * =====================================================================================
 *
 *       Filename:  1051.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 09:05:46 PM
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
	float s,sum=0;
	scanf("%f", &s);

	if(2000.01<=s && s<=3000.00)
	{
		sum= (s-2000.00)*.08;
	}
	else if(3000.01<=s && s<=4500.00)
	{
		sum = (s-3000.00)*.18+1000*.08;
	}
	else if(s>4500.00)
	{
		sum = (s-4500.00)*.28+1500*.18+1000.00*.08;
	}

	if(sum)
	{
		printf("R$ %.2f\n",sum);
	}
	else
	{
		printf("Isento\n");
	}

	return 0;
}

