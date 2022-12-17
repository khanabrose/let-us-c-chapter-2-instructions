  #include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float t, v, wcf;

printf("\nEnter the vakues of temperature and wind velocity: ");
scanf("%f%f", &t, &v);

wcf = 35.74 + 0.6215*t + (0.42751*t - 35.75)*pow(v, 0.16);
//pow(a,b) function is used to calculate a^b

printf("Wind Chill Factor : %f", wcf);

getch();
return 0;
}
