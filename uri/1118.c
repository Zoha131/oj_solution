/*
 * =====================================================================================
 *
 *       Filename:  1117.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 07:59:33 PM
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
	float i,j,temp;
	int ii=1,jj=1,t=2,l;

	while(t)
	{
		scanf("%f",&temp);
		if(temp<0 || temp >10)
		{	
			printf("nota invalida\n");
			continue;
		}
		else
		{
			if(ii)
			{
				i = temp;
				ii=0;
			}
			else if(jj)
			{
				j = temp;
				jj=0;
			}

			if(ii+jj == 0)
			{
				printf("media = %.2f\n",(i+j)/2);
				do
				{
					printf("novo calculo (1-sim 2-nao)\n");
				}
				while(scanf("%d", &l)==1 && l != 1 && l != 2);

				if(l==2)break;
				else
				{
					ii=1;
					jj=1;
					continue;
				}
			}
		}

	}


	return 0;
}

