/*
 * =====================================================================================
 *
 *       Filename:  1035.c
 *
 *    Description:  this is a text
 *
 *        Version:  1.0
 *        Created:  03/26/2017 12:42:13 AM
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
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b,&c,&d);

	if(b>c&&d>a&&a+b<c+d&&c>0&&d>0&&a%2==0)
		printf("Valores aceitos\n");
	else
		printf("Valores nao aceitos\n");

	return 0;
}

