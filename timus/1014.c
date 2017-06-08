/*
*
* code written by zoha
*
*/

#include<stdio.h>

int main()
{
    unsigned long long int s,t,temp,res=0;
    int i,j,flag;

    scanf("%llu", &t);

    temp = t;

    while(temp != 0)
    {
        flag = -1;

        for(i=9;i>1 && temp > 10;i--)
        {
            if(temp%i == 0)
            {

                res = res*10 + i;
                temp = temp/i;
                flag = 1;
                break;
            }
        }

        if(flag == -1)
        {
            if(temp < 10)
            {
                if(temp != 1)res = res*10 + temp;
                flag = 1;
                break;
            }
            else break;
        }
    }

    s = 0;

    while(res !=0)
    {
        s = s*10 + res%10;
        res = res/10;
    }

    if(t==1) printf("1\n");
    else if(t==0)printf("10\n");
    else if(flag == -1) printf("-1\n");
    else printf("%llu\n",s);

    return 0;

}

