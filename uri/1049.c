/*
 * =====================================================================================
 *
 *       Filename:  1049.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 08:03:55 PM
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
#include <string.h>

int main()
{
	char a[20],b[20],c[20];

	scanf("%s %s %s", a,b,c);

	if(!(strcmp(a,"vertebrado")))
	{
		if(!(strcmp(b,"ave")))
		{
			if(!(strcmp(c,"onivoro")))
			{
				printf("pomba\n");
			}
			else
			{
				printf("aguia\n");
			}
		}
		else
		{
			if(!(strcmp(c,"onivoro")))
			{
				printf("homem\n");
			}
			else
			{
				printf("vaca\n");
			}
		}
	}
	else
	{
		if(!(strcmp(b,"inseto")))
		{
			if(!(strcmp(c,"hematofago")))
			{
				printf("pulga\n");
			}
			else
			{
				printf("lagarta\n");
			}
		}
		else
		{
			if(!(strcmp(c,"hematofago")))
			{
				printf("sanguessuga\n");
			}
			else
			{
				printf("minhoca\n");
			}
		}
	}

	return 0;
}

