/*
 * =====================================================================================
 *
 *       Filename:  1154.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 12:50:45 AM
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
	float avrg=0;
	int i=0,temp;

	do
	{
		scanf("%d", &temp);
		if(temp>=0)
		{
			avrg += temp;
			i++;
		}
	}
	while(temp>=0);

	printf("%.2f\n",avrg/i);

	return 0;
}

