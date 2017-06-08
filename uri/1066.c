/*
 * =====================================================================================
 *
 *       Filename:  1060.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 09:35:23 PM
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
	int i, even = 0,j,odd=0,pos=0,neg=0;

	for(i=0;i<5;i++)
	{
		scanf("%d",&j);
		if(j%2==0)even++;
		else odd++;

		if(j>0)pos++;
		else if(j<0) neg++;
	}

	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);
	return 0;
}

