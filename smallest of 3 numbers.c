#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
{
    printf("%d is the smallest",a);
}
    else if
      (b<c)
{
printf("%d is the smallest",b);
}
    else
{
printf("%d is the smallest",c);
}
return 0;
}
