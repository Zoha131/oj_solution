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
        int a[3],b[3],res[3],n,temp[6],i,ans=1,flag=1;
        for(i=0;i<3;i++)
        {
            a[i]=0;
            b[i]=3000;
        }

        scanf("%d", &n);
        while(n--)
        {
            for(i=0;i<6;i++)
            {
                scanf("%d",&temp[i]);
                if(i<3 && temp[i]>a[i])a[i] = temp[i];
                else if(i>2 && temp[i]<b[i-3])b[i-3] = temp[i];
            }
        }

        for(i=0;i<3;i++)
        {
            res[i] = b[i]-a[i];
            if(res[i]<0)
            {
                flag=-1;
                break;
            }
        }
        for(i=0;i<3;i++)ans *= res[i];

        if(flag==-1)ans = 0;
        printf("Case %d: %d\n",s,ans);

    }
}

