#include<stdio.h>
#include<math.h>
int main()
{
   int n,i;
   double sum=0.0;
   printf("Enter the limit \n");
   scanf("%d",&n);
   for(i=1;i<=n*2;i=i+2)
   if(i%2!=0)
   {
      sum = sum+pow(i,2);
   }
   printf("The sum is %.3f ", sum);
   return 0;
}
