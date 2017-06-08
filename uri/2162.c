/*
 * =====================================================================================
 *
 *       Filename:  2162.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/13/2017 11:02:41 PM
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
	int n,flag=3,pre,cur;
	scanf("%d", &n);
	scanf("%d", &pre);
	n--;

	while(n--)
	{
		scanf("%d", &cur);
		if((flag == 1 || flag == 3) && pre>cur)
		{
			flag = 0;
		}
		else if((flag == 0 || flag == 3) && pre<cur)
		{
			flag = 1;
		}
		else
		{
			flag =3;
			break;
		}

		pre = cur;
	}

	if(flag == 3)
	{
		printf("0\n");
	}
	else 
	{
		printf("1\n");
	}

	return 0;
}
