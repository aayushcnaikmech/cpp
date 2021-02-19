#include<stdio.h>
int main()
{
     int m,n;
     printf("Enter the values from m to n: ");
     scanf("%d %d",&m,&n);
     while(m<=n)
{
        if(m%2==0)
        printf("%d \n",m);
        m++;
}
return 0;
}
