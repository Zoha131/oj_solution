/*
*
* code written by zoha
*
*/

#include<stdio.h>
#include<math.h>

int main()
{

    int w,t;
    scanf("%d", &t);
    for(w=1;w<=t;w++)
    {
        double r1,r2,r3,a,b,c,t_area,A,B,C,s,s_area,res;
        scanf("%lf %lf %lf",&r1,&r2, &r3);

        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        s= (a+b+c)/2.0;

        t_area = sqrt(s*(s-a)*(s-b)*(s-c));

        /*A = asin((2*t_area)/(b*c));
        B = asin((2*t_area)/(a*c));
        C = asin((2*t_area)/(b*a));
        */

        
        A = acos((b*b+c*c-a*a)/(2*b*c));
        B = acos((c*c+a*a-b*b)/(2*a*c));
        C = acos((a*a+b*b-c*c)/(2*a*b));

        s_area = (A*r3*r3+B*r1*r1+C*r2*r2)/2.00;

        res = t_area - s_area;

       // printf("%lf %lf %lf\n",a,b,c);

        printf("Case %d: %.9lf\n",w,res);
    }

    return 0;
}

