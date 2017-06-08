/*
 * =====================================================================================
 *
 *       Filename:  1181.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 09:20:40 PM
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
	char op;
	float arr[12][12],res=0;
	int i,j,item=0;

	scanf("%c",&op);
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%f",&arr[i][j]);

			if(i<j)
			{ 
				res+=arr[i][j];
				item++;
			}
		}
	}

	if(op == 'M') res /=item;

	printf("%.1f\n",res);
	return 0;
}
