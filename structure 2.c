//C structures
#include<stdio.h>
#include<string.h>//strcpy
struct student{
char name [30];
float height;
char reg_no[16];
char email [20];
int phone;
} student1, student2;

int main (){
//struct student1, student2
//strcpy (student1.name,"Mwangi");
printf("enter your name");
scanf("%s",& student1.name);
student1.height=1.7;
strcpy(student1.reg_no,"CT101/G/24801/24");
strcpy (student1.email,"mwas@gmail.com");
student1.phone=12345678;

printf("Name:%s\n", student1.name);
printf("height:%f\n",student1.height);
printf("email:%s\n", student1.email);
printf("phone number:%d\n", student1.phone);

return 0;
}