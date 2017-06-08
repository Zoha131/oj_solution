/*
 * =====================================================================================
 *
 *       Filename:  1008.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/18/2017 12:02:03 AM
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
#include <math.h>

int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		unsigned long long int s,sum=0,mid;
		int n=0,dist,c,r;
		double q;
		scanf("%llu", &s);
        
        	q=sqrt(s);
        
		n = modf(q,&q)>0?q+1:q;
		sum = pow(n,2);
		mid = sum-n+1;
		dist = s-mid;

		if(n%2==0)
		{
			if(dist>0)
			{
				c=n;
				r=n-dist;
			}
			else
			{
				c=n+dist;
				r=n;
			}
		}
		else
		{
			if(dist<0)
			{
				c=n;
				r=n+dist;
			}
			else
			{
				c=n-dist;
				r=n;
			}
		}

		

		printf("Case %d: %d %d\n",i,c,r);
	}
	return 0;
}

