/*
 * =====================================================================================
 *
 *       Filename:  2160.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/13/2017 09:12:54 PM
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
#include <string.h>

int main()
{
	char i[10000];
	scanf("%[^\n]", i);

	if(strlen(i) <= 80)
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}


	return 0;
}
