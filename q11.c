//program to calculate simple and compund interest
#include<stdio.h>
#include<math.h>
int main()
{
float prin,rate,time;
printf("enter principle, rate and time\n");
scanf("%f%f%f",&prin,&rate,&time);
printf("simple interest = %f\n",prin*rate*time);
printf("compund interest = %f",prin*pow(1+rate,time)-prin);
return 0;



}