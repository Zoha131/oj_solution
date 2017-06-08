/*
 * =====================================================================================
 *
 *       Filename:  1045.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 06:56:42 PM
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
#include <math.h>

int main()
{
	double arr[3],temp;
	int i,j;

	scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);
	
	for(i=0;i<3-1;i++)
	{
		for(j=0;j<3-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	//printf("%f %f %f", arr[0], arr[1], arr[2]);

	if(arr[0]>= arr[1]+arr[2])
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	else
	{

		if(pow(arr[0],2) == pow(arr[1],2)+pow(arr[2],2))
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if(pow(arr[0],2) > pow(arr[1],2)+pow(arr[2],2))
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else 
		{
			printf("TRIANGULO ACUTANGULO\n");
		}

		//printf("%f %f",pow(arr[1],2)+pow(arr[2],2),pow(arr[0],2));
		if(arr[0] == arr[1] && arr[0] == arr[2])
		{
			printf("TRIANGULO EQUILATERO\n");
		}
		else if(arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2])
		{
			printf("TRIANGULO ISOSCELES\n");
		}
	}

	return 0;

}

