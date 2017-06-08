/*
 * =====================================================================================
 *
 *       Filename:  1094.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 05:29:45 PM
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
	char q;
	int c=0,r=0,s=0,total,t,i,temp;

	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %c",&temp,&q);

		if(q=='C')c+=temp;
		else if(q=='R')r+=temp;
		else if(q=='S')s+=temp;
	}

	total = c+r+s;

	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",c);
	printf("Total de ratos: %d\n",r);
	printf("Total de sapos: %d\n",s);
	printf("Percentual de coelhos: %.2f %%\n",((float)c/total)*100);
	printf("Percentual de ratos: %.2f %%\n",((float)r/total)*100);
	printf("Percentual de sapos: %.2f %%\n",((float)s/total)*100);

	return 0;
}

