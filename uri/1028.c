/*
 * =====================================================================================
 *
 *       Filename:  1028.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 12:36:33 PM
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
		int a,b,res,i,temp;
		scanf("%d %d", &a,&b);
		if(a>b)
		{
			temp = a;
			a = b;
			b = temp;
		}

		for(i=a;i>0;i--)
		{
			if(a%i==0 && b%i==0)
			{
				res = i;
				break;
			}
		}

		printf("%d\n",res);
	}

	return 0;
}
