/*
 * =====================================================================================
 *
 *       Filename:  1009.c
 *
 *    Description:  salary extended
 *
 *        Version:  1.0
 *        Created:  03/25/2017 01:13:08 AM
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
	char name[100];
	float salary, sales;

	scanf("%s %f %f", name, &salary, &sales);

	printf("TOTAL = R$ %.2f\n", (sales*.15 + salary));

	return 0;
}

