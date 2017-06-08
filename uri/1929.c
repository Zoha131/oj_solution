/*
 * =====================================================================================
 *
 *       Filename:  1929.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 10:03:30 AM
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
	int arr[4],fst,scd,trd,i,j;
	for(i=0;i<4;i++)scanf("%d",&arr[i]);

	fst = arr[0];
	scd = arr[1];
	trd = arr[2];

	int l=4;
	i=3;

	while(l--)
	{
		if(fst+scd<trd || scd+trd<fst || trd+fst <scd)
		{
			fst=scd;
			scd=trd;
			if(i==4)i=0;
			trd=arr[i++];
		}
		else
		{
			printf("S\n");
			return 0;
		}
	}

	printf("N\n");
	return 0;
}
