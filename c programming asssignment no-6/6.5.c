
 /* Write a program to calculate sum of cubes of first N natural numbers */
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i * i * i);

        sum = sum + i * i * i;
    }
    printf("sum is %d ", sum);
    return 0;
}