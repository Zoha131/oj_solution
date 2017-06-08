/*
 * =====================================================================================
 *
 *       Filename:  1015.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/21/2017 11:22:45 AM
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
	int s,t;
	scanf("%d",&t);
	for(s=1;s<=t;s++)
	{
		int n,sum=0,temp;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d",&temp);
			if(temp>0)sum+=temp;
		}

		printf("Case %d: %d\n",s,sum);

	}
	return 0;
}
