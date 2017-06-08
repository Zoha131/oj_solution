/*
 * =====================================================================================
 *
 *       Filename:  1179.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 07:47:29 PM
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
	int par[5], impar[5],temp,i=0,j=0,s,t;

	for(s=0;s<15;s++)
	{
		scanf("%d", &temp);

		if(temp%2) impar[j++] = temp;
		else par[i++] = temp;

		if(j==5)
		{
			for(j=0;j<5;j++)
			{
				printf("impar[%d] = %d\n",j,impar[j]);
			}
			j=0;
		}

		if(i==5)
		{
			for(i=0;i<5;i++)
			{
				printf("par[%d] = %d\n",i,par[i]);
			}
			i=0;
		}

	}

	for(t=0;t<j;t++) printf("impar[%d] = %d\n",t,impar[t]);
	for(t=0;t<i;t++) printf("par[%d] = %d\n",t,par[t]);
	return 0;

}
