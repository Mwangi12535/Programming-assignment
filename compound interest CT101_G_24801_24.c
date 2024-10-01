//program to calculate simple interest
/* 
program to calculate simple interest
By: Michael Mwangi
Date:22/09/2024
*/
// preprocessor directive
#include<stdio.h> //scanf(),printf();
#include<math.h>
int main(){
double principle,time,rate, Amount,CI ;
printf("enter principle");
scanf("%lf",& principle);
printf("enter time");
scanf("%lf",&time);
printf("enter rate");
scanf("%lf",&rate);
Amount=(principle*(pow((1+rate/100),time)));
CI=(Amount-principle);
printf("CI=%.2lf");
return 0;
}