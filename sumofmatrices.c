#include<stdio.h>
#include<stdlib.h>
int main()

{
   int i,j,mat1[i][j],mat2[i][j],res[i][j],n,m,o,p;
   printf("number of rows and columns in both the matrices");
   scanf("%d %d %d %d",&n,&m,&o,&p);
   if(n!=o||m!=p)
{   printf("the summation is not possible");
   exit();
   return 0;
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {printf("\n");
    scanf("%d",&mat1[i][j]);
}
for(i=0;i<o;i++)
{
    for(j=0;j<p;j++)
    {printf("\n");
    scanf("%d",&mat2[i][j]);
}
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     res[i][j]=mat1[i][j]+mat2[i][j];
 }
 for(i=0;i<n;i++)
{

    {printf("\n");
    for(j=0;j<m;j++)
    printf("%d",res[i][j]);
}}
return 0;
}
