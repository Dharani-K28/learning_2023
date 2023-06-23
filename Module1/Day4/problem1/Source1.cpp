#include<stdio.h>
int main()
{
    int a[10], n, i, sum = 0;
    float avg;
    printf("enter n value:");
    scanf("%d", &n);
    printf("enter array elements:");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n; i++)
    {
        sum = sum + a[i];
        avg = sum / n;
    }
    printf("sum is %d\n", sum);
    printf("avg is %f\n", avg);
}