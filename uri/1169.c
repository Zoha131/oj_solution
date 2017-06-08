/*
 * =====================================================================================
 *
 *       Filename:  1169.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 01:00:43 PM
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
	int t;
	scanf("%d",&t);

	while(t--)
	{
		unsigned long long int a,grain=1,res;
		scanf("%llu", &a);

		if(a==64)
		{
			printf("1537228672809129 kg\n");
			continue;
		}

		while(a--)
		{
			grain *=2;
		}

		res = grain/(12*1000);

		printf("%llu kg\n",res);
	}

	return 0;
}
