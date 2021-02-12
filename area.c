#include<stdio.h>
#include<math.h>
float area(int,int,int)
int main()
{
     int a,b,c,area=0.0;
     printf("Enter the sides of the triangle:");
     scanf("%d,%d,%d",&a,&b,&c);
     A=area(a,b,c);
     printf("The area of the triangle is %f",A);
     return 0;
}
float areaoftriangle(int a,int b,int c)
{

     float S,area=0.0;
     S=(a+b+c)/2;
     area=sqrt(S*(S-a)*(S-b)*(S-c));
     return area;
{

