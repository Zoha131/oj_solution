/*
 * =====================================================================================
 *
 *       Filename:  1061.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/03/2017 09:47:36 PM
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
	int d1,h1,m1,s1,d2,h2,m2,s2,d,h,m,s;
	scanf("Dia %d", &d1);
	scanf("%d : %d : %d\n", &h1, &m1,&s1);
	scanf("Dia %d", &d2);
	scanf("%d : %d : %d", &h2, &m2,&s2);

	if(s2<s1)
	{
		s2+=60;
		m2--;
	}
	s = s2-s1;
	if(m2<m1)
	{
		m2+=60;
		h2--;
	}
	m = m2-m1;
	if(h2<h1)
	{
		h2+=24;
		d2--;
	}
	h = h2-h1;
	d = d2-d1;

	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
	return 0;
}

