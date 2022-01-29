#include <stdio.h>
int main()
{
   int i, n, sum=0;

   printf("Enter the number\n");
   scanf("%d", &n);   //5

   for(i=0; i<n; i++)   //i=5
       {
         sum = sum + i;
       }

    printf("\n Sum of = %d\n", sum);
    return 0;
}