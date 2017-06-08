/*
 * =====================================================================================
 *
 *       Filename:  big_mod.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2017 07:53:42 PM
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

long long int bigmod(long long int base, long long int power, int mod)
{
	if(power == 0)
	{
		return 1;
	}
	else if (power%2==1)
	{
		return ((base%mod)*(bigmod(base,power-1,mod)))%mod;
	}
	else
	{
		long long int c = bigmod(base, power/2,mod);
		return ((c%mod) * (c%mod))%mod;
	}
}

int main()
{
	long long int base, power, mod;
	while(scanf("%lld %lld %lld", &base, &power, &mod)==3)
		printf("%lld\n", bigmod(base,power,mod));

	return 0;
}

