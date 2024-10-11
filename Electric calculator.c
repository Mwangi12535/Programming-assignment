//ELECTRICITY BILl CALCULATOR
/*
Program to calculate the electric bill
Author: Michael Mwangi
Reg No:CT101/G/24801/24
Date:7/10/2024
*/
//preprocessor directive
#include <stdio.h>
#include<math.h>
int main(){
int customerID, customerName, chargePerUnit;
double unitConsumed,totalBill;
//user inputs
printf("enter customerID");
scanf("%d",& customerID);
printf("enter customerName");
scanf("%d",& customerName);
printf("enter unitConsumed");
scanf("%d",& unitConsumed);
//condition application and calculations
if(unitConsumed<200){
chargePerUnit=1.20;
} else if(unitConsumed<400){
chargePerUnit=1.50;
}else if(unitConsumed<600){
chargePerUnit=1.80;
}else{
chargePerUnit=2.00;
}
//calculate Total Bill
totalBill=unitConsumed*chargePerUnit;
if(totalBill>400){
0.15*totalBill;
} else if(totalBill<400){
totalBill=unitConsumed*chargePerUnit;
}
printf("customerID:%d\n",customerID);
printf("customerName:%d\n",customerName);
printf("unitConsumed:%d\n",unitConsumed);
printf("totalBill:%lf\n",totalBill);
return 0;
}