#include<stdio.h>
int main()
{
printf("Enter two numbers\n");
int c,d;
scanf("%d %d",&c,&d);
printf("Before Interchange C=%d and D=%d.\n",c,d);
c=c+d;
d=c-d;
c=c-d;
printf("After Interchange C=%d and D=%d.\n",c,d);
return 0;
}
