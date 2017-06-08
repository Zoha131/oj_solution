/*
 * =====================================================================================
 *
 *       Filename:  1170.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 03:05:49 PM
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
	scanf("%d", &t);
	while(t--)
	{
		int res=0;
		float x;
		scanf("%f",&x);
		while(x>1.0)
		{
			x/=2;
			res++;
		}

		printf("%d dias\n", res);
	}
	return 0;
}
