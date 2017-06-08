/*
 * =====================================================================================
 *
 *       Filename:  1564.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/06/2017 11:55:26 PM
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
	int x;
	while(scanf("%d", &x)==1)
	{
		if(x==0) printf("vai ter copa!\n");
		else printf("vai ter duas!\n");
	}

	return 0;
}
