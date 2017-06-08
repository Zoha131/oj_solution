/*
 * =====================================================================================
 *
 *       Filename:  1096.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/04/2017 05:48:42 PM
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
	int i=1,j=7;

	while(i<=9)
	{
		printf("I=%d J=%d\n",i,j+(i-1));

		if(j==7)j=6;
		else if(j==6)j=5;
		else if(j==5)j=7;

		if(j==7)i+=2;
	}

	return 0;
}

