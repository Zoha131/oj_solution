/*
 * =====================================================================================
 *
 *       Filename:  2061.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 11:41:43 PM
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
	int tab,t;
	char step[10];

	scanf("%d %d", &tab,&t);
	while(t--)
	{
		gets(step);
		if(strcmp(step,"fechou")==0)tab++;
		else tab--;
	}

	printf("%d\n",tab);

	return 0;
}
