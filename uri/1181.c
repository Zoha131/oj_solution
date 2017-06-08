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
	int i,j,line;

	scanf("%d %c", &line,&op);
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%f",&arr[i][j]);

			if(i==line) res+=arr[i][j];
		}
	}

	if(op == 'M') res /=12;

	printf("%.1f\n",res);
	return 0;
}
