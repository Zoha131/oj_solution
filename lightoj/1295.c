/*
*
* code written by zoha
*
*/

#include<stdio.h>

int main()
{
    int s,t;
    scanf("%d", &t);
    for(s=1;s<=t;s++)
    {
        long long int a,b;
        scanf("%lld %lld", &a, &b);

        printf("Case %d: %lld\n",s,(a/2)*b);
    }

    return 0;
}

