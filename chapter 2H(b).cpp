#include<stdio.h>
#include<math.h>
int main()
{
printf("Enter number\n");
int number;
scanf("%d",&number);
int temp=number;
int length_of_number=5;
int reverse=0,remainder=0;
    while(number!=0)
{
length_of_number--;
remainder=number%10;
reverse=reverse+remainder*pow(10.0,length_of_number);
number/=10;
}
printf("Reverse of number %d is %d",temp,reverse);
return 0;
}
