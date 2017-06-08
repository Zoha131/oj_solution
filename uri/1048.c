/*
 * =====================================================================================
 *
 *       Filename:  1048.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 07:46:31 PM
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
	float s,e;
	scanf("%f", &s);

	if(s<=400.00)
	{
		e = s*.15;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",s+e,e);
	}
	else if(400.01<=s && s<=800.00)
	{
		e = s*.12;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",s+e,e);
	}
	else if(800.01<=s && s<=1200.00)
	{
		e = s*.10;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",s+e,e);
	}
	else if(1200.01<=s && s<=2000.00)
	{
		e = s*.07;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",s+e,e);
	}

	else
	{
		e = s*.04;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",s+e,e);
	}




	return 0;
}

