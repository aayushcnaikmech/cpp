#include <stdio.h>
#include <math.h>
float area(float,float,float);
int main()
{
    float a,b,c;
    float ar=0.0;
    printf("enter the sides of triangle:");
    scanf("%f,%f,%f", &a,&b,&c);
    ar=area(a,b,c);
    printf("the area of triangle is %f", ar);
    return 0;
}
float area(float a,float b,float c)
{
    float sem=0.0,area=0.0;
    sem=(a+b+c)/2;
    area=sqrt(sem*(sem-a)*(sem-b)*(sem-c));
    printf("area=%f",area);
    return area;
}
