/*
 * =====================================================================================
 *
 *       Filename:  1037.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2017 01:15:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
	float value;

	scanf("%f", &value);

	if(0<=value && value<=25)
	{
		printf("Intervalo [0,25]\n");
	}
	else if(25<value && value<=50)
	{
		printf("Intervalo (25,50]\n");
	}
	else if(50<value && value<=75)
	{
		printf("Intervalo (50,75]\n");
	}
	else if(75<value && value<=100)
	{
		printf("Intervalo (75,100]\n");
	}
	else
	{
		printf("Fora de intervalo\n");

	}
	return 0;
}

