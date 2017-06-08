/*
 * =====================================================================================
 *
 *       Filename:  2126.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/08/2017 12:03:58 AM
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
#include <string.h>

int main()
{
	char n1[100],n2[100];
	int cs = 0;
	
	while(scanf("%s %s",n1,n2)==2)
	{
		cs++;
		int pos=0,sec=0,n1_len,n2_len,i,j=0,temp,k;

		n1_len = strlen(n1);
		n2_len = strlen(n2);

		for(i=0;i<n2_len;i++)
		{
			//printf("%c\t%c\n",n2[i], n1[j]);
		
			if(n2[i] == n1[j])
			{
				if(j==0)temp = i;
				j++;
				if(j==n1_len)
				{
					j=0;
					sec++;
					pos = temp;
					for(k=temp+1;k<n1_len-1;k++)
					{
						//backtracing array..........
					}

				}
			}
			else if(n2[i] == n1[j-1]) temp = i;
			else j=0;

		}

		printf("Caso #%d:\n",cs);

		if(sec != 0)
		{	
			printf("Qtd.Subsequencias: %d\n",sec);
			printf("Pos: %d\n\n",pos+1);
		}
		else printf("Nao existe subsequencia\n\n");

	}
}
