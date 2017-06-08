/*
 * =====================================================================================
 *
 *       Filename:  1010.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2017 06:32:37 PM
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
	int code1,unit1,code2,unit2;
	float rate1, rate2;
	scanf("%d %d %f", &code1, &unit1, &rate1);
	scanf("%d %d %f", &code2, &unit2, &rate2);

	printf("VALOR A PAGAR: R$ %.2f\n",((unit1*rate1)+(unit2*rate2)));

	return 0;
}
