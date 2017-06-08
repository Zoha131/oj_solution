/*
*
* code written by zoha
*
*/

#include<stdio.h>
#include<math.h>


int main()
{
    const double PI = acos(-1);
    int t,s;
    scanf("%d",&t);
    for(s=1;s<=t;s++)
    {
        int r1,r2,h,p;
        double R,v;
        scanf("%d %d %d %d", &r1,&r2,&h,&p);

        R = r2 + (r1-r2)*(p/(double)h);
        v = p * PI/3.0 * (R*R + R*r2 + r2*r2);

        printf("Case %d: %.9lf\n",s,v);
    }

    return 0;
}


