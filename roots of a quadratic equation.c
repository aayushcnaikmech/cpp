#include<stdio.h>
#include<math.h>
int main()
{
     int a,b,c,discriminant,root1,root2,rpart,ipart;
     printf("Enter a,b and c:");
     scanf("%d,%d,%d",&a,&b,&c);

     discriminant=b*b-4*a*c;

     if(discriminant>0)
{
     root1 = (-b + sqrt(discriminant))/(2*a);
     root2 = (-b - sqrt(discriminant))/(2*a);
     printf("root1=%.2d and root2=%.2d",root1,root2);
}
     else if(discriminant==0)
{
     root1 = -b/(2*a);
     root2 = -b/(2*a);
     printf("root1=%.2d and root2=%.2d",root1,root2);
}
     else
{
     rpart=-b/(2*a);
     ipart=sqrt(-discriminant)/(2*a);
     printf("root1 = %.2d+%.2di and root2 = %.2d+%.2di",rpart,ipart,rpart,ipart);
}
return 0;
}
