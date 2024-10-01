// program to calculate fine due for overdue books
/*
Author: Michael Mwangi
Reg no:CT101/G/24801/24
Date:1/10/2024
*/
// preprocessor directive
#include <stdio.h>//printf()scanf();
#include <math.h>
int main (){
int bookID,dueDate,returnDate, daysOverdue;
double fineRate,fineAmount;
// user inputs
printf("enter bookID");
scanf("%d",&bookID);
printf("enter dueDate");
scanf("%d",& dueDate);
printf("enter returnDate");
scanf("%d",& returnDate);
// calculate daysOverdue//
daysOverdue=returnDate-dueDate;
//determining the fine//
if(daysOverdue<=7){
fineRate=20;
} else if(daysOverdue<=14){
fineRate=50;
} else{
 fineRate =100;
}
printf("bookID: %d\n", bookID);
printf("dueDate: %d\n", dueDate);
printf("returnDate: %d\n",returnDate);
printf("daysOverdue: %d\n",daysOverdue);
printf("fineRate: %lf\n",fineRate);
fineAmount=fineRate*daysOverdue;
printf("fineAmount: %lf\n",fineAmount);
return 0;
}