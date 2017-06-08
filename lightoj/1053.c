/*
 * =====================================================================================
 *
 *       Filename:  1053.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/21/2017 11:47:16 AM
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
		long int a,b,c;
		scanf("%ld %ld %ld",&a,&b,&c);
		if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)printf("Case %d: yes\n",s);
		else printf("Case %d: no\n",s);
	}

	return 0;
}
