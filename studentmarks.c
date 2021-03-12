#include<stdio.h>
void main()
{
 struct student
{
   int rlno;
   char name[10];
   char section[5];
   char course[20];
   float fees;
   int result;
}stud1,stud2;
scanf("%d",&stud1.rlno);
scanf("%s",stud1.name);
scanf("%s",stud1.section);
scanf("%f",&stud1.fees);
scanf("%d",&stud1.result);
printf("Enter the details of the second student");
scanf("%d",&stud2.rlno);
scanf("%s",stud2.name);
scanf("%s",stud2.section);
scanf("%f",&stud2.fees);
scanf("%d",&stud2.result);
if(stud1.result>stud2.result)
{
printf("%d",&stud1.rlno);
printf("%s",stud1.name);
printf("%s",stud1.section);
printf("%f",&stud1.fees);
printf("%d",&stud1.result);
}
else
{
printf("%d",&stud2.rlno);
printf("%s",stud2.name);
printf("%s",stud2.section);
printf("%f",&stud2.fees);
printf("%d",&stud2.result);
}}
