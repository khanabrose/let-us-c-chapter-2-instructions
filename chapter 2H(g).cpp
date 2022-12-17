#include<stdio.h>
#include<math.h>
int main()
{
printf("Enter the value of angle\n");
float angle;
scanf("%f",&angle);
printf("The sine of angle = %f.\n",sin(angle));
printf("The cosine of angle = %f.\n",cos(angle));
printf("The tangent of angle = %f.\n",tan(angle));
printf("The cotangent of angle = %f.\n",(1/tan(angle)));
printf("The cosecant of angle = %f.\n",(1/sin(angle)));
printf("The secant of angle = %f.\n",(1/cos(angle)));
return 0;
}
