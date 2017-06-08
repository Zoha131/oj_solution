/*
 * =====================================================================================
 *
 *       Filename:  2165.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/14/2017 12:27:44 AM
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
	char twt[1000];
	scanf("%[^\n]",twt);

	if(strlen(twt)<=140)
	{
		printf("TWEET\n");
	}
	else 
	{
		printf("MUTE\n");
	}

	return 0;
}
