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
	float i=0,j=1;

	while(i<=2.01)
	{
		if(i==0.0 || i==1.0 || i>=2.0)
		{
			printf("I=%.0f J=%.0f\n",i,j+i);
		}
		else
		{
		 	printf("I=%.1f J=%.1f\n",i,j+i);
		}

		if(j==1)j=2;
		else if(j==2)j=3;
		else if(j==3)j=1;

		if(j==1)i+=0.2;
	}

	return 0;
}

