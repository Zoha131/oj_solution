/*
 * =====================================================================================
 *
 *       Filename:  1984.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/07/2017 08:30:40 PM
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
	long long int val,res=0;
	int len=0;
	scanf("%lld", &val);

	while(val!=0)
	{
		res = res*10+val%10;
		val /=10;
		len++;
	}

	printf("%.*lld\n",len,res);
	return 0;

}
