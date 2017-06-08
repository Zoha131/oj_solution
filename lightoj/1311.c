/*
*
* code written by zoha
*
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int s,t;
    scanf("%d",&t);

    for(s=1;s<=t;s++)
    {
        double v1,v2,v3,a1,a2,t1,t2,t3,d,d2;
        scanf("%lf %lf %lf %lf %lf", &v1, &v2,&v3,&a1,&a2);

        d = pow(v1,2)/(2*a1) + pow(v2,2)/(2*a2);

        t1 = v1/a1;
        t2= v2/a2;
        t3 = t1>t2?t1:t2;
        d2 = t3*v3;

        printf("Case %d: %lf %lf\n",s,d,d2);
    }

    return 0;
}

