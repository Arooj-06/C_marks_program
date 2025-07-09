// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int mark1,mark2,mark3,mark4,mark5;
   printf("Enter Mark1:");
     scanf("%d",&mark1);
    printf("Enter Mark2:");
    scanf("%d",&mark2);
     printf("Enter Mark3:");
scanf("%d",&mark3);
int avg=(mark1+mark2+mark3)/3;
printf("Average:%d\n",avg);

if((mark1==40)&&(mark2==40)&&(mark3==40)){
printf("PASS in all subjects\n");
}
else{
printf("NOT PASS in all subjects\n");
}
if(avg>=75){
    printf("DISTINCTION\n");
}
else{
    printf("NO DISTRICTION\n");
}
if((mark1<40)||(mark2<40)||(mark3<40)){
    printf("FAILED in any subject\n");
}
    return 0;
}