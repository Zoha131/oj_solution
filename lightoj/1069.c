/*
 * =====================================================================================
 *
 *       Filename:  1069.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/21/2017 12:03:47 PM
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
	int a,b;
	const int p = 5*2+3*3;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		if(n>=m)printf("Case %d: %d\n",b,p+n*4);
		else  printf("Case %d: %d\n",b,p+m*4+(m-n)*4);
	}

	return 0;
}
