/*
 * =====================================================================================
 *
 *       Filename:  1059.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 09:31:48 PM
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
	long int i,j,n;
	scanf("%ld",&n);

	for(i=0;i<n;i++)
	{
		scanf("%ld",&j);

		if(j==0)
		{
			printf("NULL\n");
			continue;
		}

		if(j%2)
		{
			printf("ODD ");
		}
		else
		{
			printf("EVEN ");
		}

		if(j<0)
		{
			printf("NEGATIVE\n");
		}
		else
		{
			printf("POSITIVE\n");
		}

	}


	return 0;
}

