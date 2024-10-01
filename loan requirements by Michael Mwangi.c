//program to check loan qualifications and offer loans
/* 
By: Michael Mwangi 
Admission No:CT101/G/24801/24
Date:22/09/2024
*/
// preprocessor directive
#include<stdio.h> //scanf(),printf();
int main()
{
int age;
float salary;
printf("enter age");
scanf("%d",&age);
printf("enter salary");
scanf("%f",& salary);
if(age>=21,salary>21000){
printf("congratulations you qualify for a loan");
} else {
printf("unfortunately we are unable to offer a loan at this time");
}
return 0;
}