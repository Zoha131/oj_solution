/*
 * =====================================================================================
 *
 *       Filename:  1155.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/06/2017 01:16:48 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: zoha
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

float seq(int a)
{
	if(a==1)return 1.00;
	else return 1/(float)a + seq(a-1);
}

int main()
{
	printf("%.2f\n", seq(100));

	return 0;
}
