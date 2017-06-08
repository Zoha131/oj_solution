/*
*
* code written by zoha
*
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int s,t;
    scanf("%d", &t);
    for(s=1;s<=t;s++) 
    {
        long long int r1,c1,r2,c2,r,c,x;
        scanf("%lld %lld %lld %lld",&r1,&c1,&r2,&c2);
        r = abs(r1-r2);
        c = abs(c1-c2);
        x = abs(r-c);

        if(x%2)
        {
            printf("Case %d: impossible\n",s);
            continue;
        }

        if(r==c)x=1;
        else x=2;
        printf("Case %d: %lld\n",s,x);
    }

    return 0;
}

