#include<stdio.h>
#include<math.h>

int main()
{
 int m,n,i;
 printf("Enter the limits\n");
 scanf("%d %d",&m,&n);
 for(i=m;i<=n;i++)
 {if(i%2==0)
 printf("%d\n",i);
 else
 printf("");
 }
 return 0;
 }
