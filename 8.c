//km to m, cm , mm
#include<stdio.h>
#include<math.h>
int main ()
{ float a;
scanf("%f",&a);
printf("meter %f,centimeter %f, millimeter %f",a*pow(10,3),a*pow(10,5),a*pow(10,6));
return 0;
}
