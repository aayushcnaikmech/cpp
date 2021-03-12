#include<stdio.h>
int Sum(int *a,int *b);
int difference(int *d,int *e);
int prod(int *g,int *h);
int quotient(int *o,int *p);

int Sum(int *a,int *b)
{
   int c;
   c = *a + *b;
   return c;
}
int difference(int *d,int *e)
{
   int f;
   f = *d - *e;
   return f;

}
int prod(int *g,int *h)
{
   int i;
   i = *g * *h;
   return i;
}
int quotient(int *o,int *p)
{
   int q;
   q = *o / *p;
   return q;
}
void main()
{
   int x,y,k=0,l=0,m=0,n=0;
   printf("Enter two numbers :");
   scanf("%d %d",&x,&y);
   k=Sum(&x,&y);
   l=difference(&x,&y);
   m=prod(&x,&y);
   n=quotient(&x,&y);
   printf("Sum=%d difference=%d product=%d quotient=%d",k,l,m,n);
   }
