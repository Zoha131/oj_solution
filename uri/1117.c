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
	int ii=1,jj=1,t=2;

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
				t--;
				ii=0;
			}
			else if(jj)
			{
				j = temp;
				t--;
				jj=0;
			}
		}
	}

	printf("media = %.2f\n",(i+j)/2);

	return 0;
}

