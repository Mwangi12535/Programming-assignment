// C-arrays - 1D arrays
#include<stdio.h>
int i,j,k;
int main(){
int marks [2][3][3]={{{71,70,50},
{20,76,70}}
,{{20,30,40}
,{10,20,30}}};
for(i=0;i<2;i++)
for(j=0;j<2;j++)
for(k=0;k<3;k++)
{
printf("Marks[%d][%d][%d]is=%d\n",i,j,k, marks [i][j][k]);
}
return 0;
}
