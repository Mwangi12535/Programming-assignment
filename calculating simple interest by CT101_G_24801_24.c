//program to calculate simple interest
/* 
program to calculate simple interest
By: Michael Mwangi
Date:22/09/2024
*/
// preprocessor directive
#include <stdio.h> //scanf(),printf()
int main(){
float principle ,time,rate,SI;
/*input principle,rate and time*/
printf("enter principle");
scanf("%f",& principle);
printf("enter time");
scanf("%f",&time);
printf("enter rate");
scanf("%f",&rate);
SI=(principle*time*rate)/100;
printf("simple interest=%.2f",SI);
return 0;
}