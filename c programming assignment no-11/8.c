/* Write a function to print PASCAL Triangle. (TSRN) */

#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for ( i = 1; i <=n; i++)
    
       fact = fact * i;
        return fact;
    
}
int combi(int n,int r)
{
    return fact(n)/(fact (r) * fact (n-r));
}
int permutation(int n,int r)
{
    return fact (n) / fact(n-r);
}
int pascal(int n)
{
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%d ",combi(i,j));
        }
        printf("\n");
    }
    
}
int main()
{
  pascal(5);
}