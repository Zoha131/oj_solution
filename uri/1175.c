/*
 * =====================================================================================
 *
 *       Filename:  1175.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 06:59:36 PM
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
	int i,arr[20],j;
	for(i=0;i<20;i++) scanf("%d", &arr[i]);
	i=19;
	j=0;

	while(j<i)
	{
		arr[i]= arr[i]^arr[j];
		arr[j]= arr[i]^arr[j];
		arr[i]= arr[i]^arr[j];

		j++;
		i--;
	}

	for(i=0;i<20;i++) printf("N[%d] = %d\n",i,arr[i]);

}
