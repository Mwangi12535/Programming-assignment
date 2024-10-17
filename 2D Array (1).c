// C-arrays - 1D arrays
#include<stdio.h>
int i,j;
int main(){
int marks [2][3]={{71,70,50},{20,76,70}};
for(i=0;i<2;i++){
for(j=0;j<3;j++)
printf("Marks[%d][%d]is=%d\n",i,j, marks [i][j]);
}
return 0;
}
