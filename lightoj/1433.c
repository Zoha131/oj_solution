/*
*
* code written by zoha
* don't just copy & paste other's code
* try to write your version of solution for this problem
* you can find the logic behind this solution here
* https://cseman.blogspot.com
*
* happy coding :)
*
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int t, s;
    scanf("%d", &t);
    for(s=1;s<=t;s++)
    {
        double ox,oy,ax,ay,bx,by,r,c,A,res;

        scanf("%lf %lf %lf %lf %lf %lf", &ox,&oy,&ax,&ay,&bx,&by);
        c= sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        r= sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));

        A = acos((r*r+r*r-c*c)/(2*r*r));

        res = A*r;

        printf("Case %d: %.9lf\n",s,res);

    }

    return 0;
}

