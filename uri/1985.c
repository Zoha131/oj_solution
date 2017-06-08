/*
 * =====================================================================================
 *
 *       Filename:  1985.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 09:06:10 PM
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

typedef struct {
	int id;
	float price;
} prod;

prod p_list[5];

void add_prod(prod *p,int id,float price)
{
	p-> id = id;
	p-> price = price;
}

float find_price(int id)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(p_list[i].id == id)
		{
			// I am sure that I can find the id
			return p_list[i].price;
		}
	}
}

int main()
{
	//adding value to the prod_list array
	float k = 1.50;
	int i,l=1001;
	for(i=0;i<5;i++)
	{
		add_prod(&p_list[i],l+i,k+i);
	}

	//actual solving kode starts here;
	int t,id,unit;
	float sum=0;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d",&id,&unit);
		sum += find_price(id)*unit;
	}

	printf("%.2f\n",sum);
	
	return 0;
}
