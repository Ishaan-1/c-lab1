//percentage of marks
#include<stdio.h>
int main ()
{
int s1,s2,s3,s4,s5;
float t;
printf("enter marks of 5 subjects\n");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
t=(s1+s2+s3+s4+s5)/5;
printf("percentage of marks if %f",t);
return 0;
}
