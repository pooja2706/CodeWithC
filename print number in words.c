#include<stdio.h>
int main(){
int num1,num2,i=1,k,sum=0;
printf("Enter the number:");
scanf("%d",&num1);
num2=num1;
while(num2>0){
    i=i*10;
    num2=num2/10;
}
i=i/10;
while(num1>0){
    k=num1%10;
    sum=sum+k*i;
    i=i/10;
    num1=num1/10;
}
while(sum>0){
   int j=sum%10;
   switch(j){
    case 0: printf("zero\t");
    break;
    case 1:printf("one\t");
    break;
    case 2: printf("two\t");
    break;
    case 3: printf("three\t");
    break;
    case 4: printf("four\t");
    break;
    case 5: printf("five\t");
    break;
    case 6: printf("six\t");
    break;
    case 7: printf("seven\t");
    break;
    case 8: printf("eight\t");
    break;
    case 9: printf("nine\t");
    break;
    default: printf("Enter a valid number");
   }
    sum=sum/10;
}
return 0;
}
