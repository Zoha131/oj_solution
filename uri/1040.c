/*
 * =====================================================================================
 *
 *       Filename:  1040.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 05:09:42 PM
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
	float n1,n2,n3,n4,n5,media;
	scanf("%f %f %f %f", &n1,&n2,&n3,&n4);

	media = (n1*2+n2*3+n3*4+n4)/(2+3+4+1);

	printf("Media: %.1f\n", media);

	if(media>=7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else if(media<5.0)
	{
		printf("Aluno reprovado.\n");
	}
	else
	{
		printf("Aluno em exame.\n");
		scanf("%f", &n5);
		printf("Nota do exame: %.1f\n",n5);
		media = (media+n5)/2;

		if(media>=5.0)
		{
			printf("Aluno aprovado.\n");
		}
		else
		{
			printf("Aluno reprovado.\n");
		}

		printf("Media final: %.1f\n",media);
	}

	return 0;
}

