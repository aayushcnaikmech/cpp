
#include <stdio.h>
float average(float,float,float);
int main()
{
    float a,b,c;
    float average=0.0;
    printf("enter 3 integer values\n");
    scanf("%f,%f,%f",&a,&b,&c);
    average=avg(a,b,c);
    printf("average of 3 numbers is %f",average);
    return 0;
}
   float average(float a,float b,float c)
{
    float avg=0.0;
    avg=(a+b+c)/3;
    return avg;
}
