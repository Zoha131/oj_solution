/*
*
* code written by zoha
*
*/

#include<stdio.h>

void bubble_sort(long int arr[],long int length)
{
	int i,j;

	for(i=0;i<length-1;i++)
	{
		for(j=0;j<length-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j] = arr[j] ^ arr[j+1];
				arr[j+1] = arr[j] ^ arr[j+1];
				arr[j] = arr[j] ^ arr[j+1];
			}
		}
	}

}


int main()
{
    long int s,t, sum=0;
    scanf("%ld", &t);
    long int a[t];
    int i,j;

    for(i=0;i<t;i++)
    {
        scanf("%ld", &a[i]);
    }

    bubble_sort(a,t);

    s = t/2 +1;

    for(i=0;i<s;i++)
    {
       sum += a[i]/2 + 1; 
    }

    printf("%ld\n", sum);

    return 0;


}

























