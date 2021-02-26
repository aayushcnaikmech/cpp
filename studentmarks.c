#include <stdio.h>

int main() {
 int marks[4][3],i,j,maxmarks;
 for(i=0;i<4;i++)
 {
    printf("enter the marks obtained by student %d",i);
    for(j=0;j<3;j++)
    {printf("\n marks[%d][%d]=",i,j);
    scanf("%d",&marks[i][j]);
    }
 }
  for(j=0;j<3;j++)
  {
      maxmarks=marks[0][j];
      for(i=0;i<4;i++)
  {if (marks[i][j]>maxmarks)
  {maxmarks=marks[i][j];}
  }
  printf("the highest marks in the subject is %d=%d",j,maxmarks);
  }
    return 0;
}
