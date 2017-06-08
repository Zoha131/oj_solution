/*
 * =====================================================================================
 *
 *       Filename:  1010.c
 *
 *    Description:  thuglife
 *
 *        Version:  1.0
 *        Created:  04/19/2017 08:02:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
 #include <stdio.h>

int main()
{
	long int t,i;
	scanf("%ld",&t);
	for(i=1;i<=t;i++)
	{
		int m,n,res,p,k,x;
		scanf("%d %d", &m,&n);

        p=m/2;
        k=n/2;
        res = p*k + (m-p)*(n-k);

        if(m==2 || n==2)
        {
            x = (m==2)?n:m;
            if(x%2==0) res += x%4;
            else res++;
        }
        else if(m==1 || n==1) res = (m==1)?n:m;

		printf("Case %ld: %d\n",i,res);
	}

	return 0;
}
