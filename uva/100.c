#include<stdio.h>

int main()
{
    int i, j, n, m, result, final_result, k,l;
    unsigned int temp;

    while(scanf("%d %d", &n, &m)==2)
    {
        final_result = 0;
        j = 1;

        if(n > m)
        {
            k = m;
            l = n;
        }else
        {
            k = n;
            l = m;
        }

        for(i = k; i <= l; i++)
        {   temp = i;
            result = 1;
            while(j > 0)
            {
                if(temp == 1)
                    break;
                if(temp %2 ==1)
                    temp = 3*temp +1;
                else
                    temp = temp/2;

                result++;
            }

            if(result > final_result)
                final_result = result;

        }

        printf("%d %d %d\n", n, m, final_result);
    }
    return 0;
}
