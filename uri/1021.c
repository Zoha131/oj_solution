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
#include <math.h>

int main()
{
	float amount;
	int note_100=0, note_50=0,
	    note_20=0,note_10=0, note_5=0,
	    note_2=0, note_1=0,coin_50=0,
	    coin_25=0,coin_10=0,coin_05=0,
	    coin_01 = 0;

	scanf("%f", &amount);


	while(amount != 0.00)
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
		}else if (amount >= .50)

		{
			coin_50++;
			amount -=.50;
		}else if (amount >= .25)

		{
			coin_25++;
			amount -=.25;
		}else if (amount >= .10)

		{
			coin_10++;
			amount -=.10;
		}else if (amount >= .05)

		{
			coin_05++;
			amount -=.05;
		}else if (amount >= .009000)

		{
			coin_01++;
			amount -=.01;
		}
		else
		{
			break;
		}





	}

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",note_100);
	printf("%d nota(s) de R$ 50.00\n",note_50);
	printf("%d nota(s) de R$ 20.00\n",note_20);
	printf("%d nota(s) de R$ 10.00\n",note_10);
	printf("%d nota(s) de R$ 5.00\n",note_5);
	printf("%d nota(s) de R$ 2.00\n",note_2);
	
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",note_1);
	printf("%d moeda(s) de R$ 0.50\n",coin_50);
	printf("%d moeda(s) de R$ 0.25\n",coin_25);
	printf("%d moeda(s) de R$ 0.10\n",coin_10);
	printf("%d moeda(s) de R$ 0.05\n",coin_05);
	printf("%d moeda(s) de R$ 0.01\n",coin_01);


	return 0;
}

