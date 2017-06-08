/*
 * =====================================================================================
 *
 *       Filename:  1961.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 01:43:59 PM
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
	int p,n,fst,scnd=0,lng=0,dr=0;

	scanf("%d %d", &p,&n);
	while(n--)
	{
		scanf("%d",&fst);
		if(scnd) dr = abs(fst-scnd);

		if(dr>lng)lng=dr;
		scnd = fst;

	}

	if(lng>p)printf("GAME OVER\n");
	else printf("YOU WIN\n");

	return 0;
	
}
