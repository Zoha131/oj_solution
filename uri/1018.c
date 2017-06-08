/*
 * =====================================================================================
 *
 *       Filename:  1018.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2017 08:12:43 PM
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
	int amount,value; 
	int note_100=0, note_50=0,
	    note_20=0,note_10=0, note_5=0,
	    note_2=0, note_1=0;

	scanf("%d", &amount);

	value = amount;

	while(amount != 0)
	{
		if (amount >= 100)
		{
			note_100++;
			amount -=100;
		}
		else if (amount >= 50)
		{
			note_50++;
			amount -=50;
		}else if (amount >= 20)
		{
			note_20++;
			amount -=20;
		}else if (amount >= 10)
		{
			note_10++;
			amount -=10;
		}else if (amount >= 5)
		{
			note_5++;
			amount -=5;
		}else if (amount >= 2)
		{
			note_2++;
			amount -=2;
		}else if (amount >= 1)

		{
			note_1++;
			amount -=1;
		}
	}

	printf("%d\n", value);

	printf("%d nota(s) de R$ 100,00\n",note_100);
	printf("%d nota(s) de R$ 50,00\n",note_50);
	printf("%d nota(s) de R$ 20,00\n",note_20);
	printf("%d nota(s) de R$ 10,00\n",note_10);
	printf("%d nota(s) de R$ 5,00\n",note_5);
	printf("%d nota(s) de R$ 2,00\n",note_2);
	printf("%d nota(s) de R$ 1,00\n",note_1);

	return 0;
}

