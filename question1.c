#include<stdio.h>
int main ()
{ int a,b,c;
scanf ("%d%d",&a,&b);
c=a+b;
printf("%d=%d+%d",c,a,b);
c=a-b;
printf("%d=%d-%d",c,a,b);
c=a*b;
printf("%d=%d x %d",c,a,b);
c=a/b;
printf("%d=%d/%d",c,a,b);
return 0;
}
