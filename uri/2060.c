/*
 * =====================================================================================
 *
 *       Filename:  2060.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 11:28:08 PM
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
	int t,temp,d_2=0,d_3=0,d_4=0,d_5=0;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &temp);

		if(temp%2==0)d_2++;
		if(temp%3==0)d_3++;
		if(temp%4==0)d_4++;
		if(temp%5==0)d_5++;
	}

	printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",d_2,d_3,d_4,d_5);

	return 0;
}
