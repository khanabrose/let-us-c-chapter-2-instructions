#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a , b , c , s , area;

printf("\nEnter three sides of the triangle : ");
scanf("%f%f%f", &a, &b, &c);

//Finding area of the triangle by the Heron's Formula
s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
//sqrt() is a funtion that find the square root.

printf("\nArea : %f", area);

getch();
return 0;
}
