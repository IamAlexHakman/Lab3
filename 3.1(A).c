#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c;
printf("введіть число b = ");
scanf("%f",&b);
printf("введіть число c = ");
scanf("%f",&c);
if(b == 1)
{
   a = 4*b-5*c;
	 printf ("Виконалсь перша умова\n%f",a);
}
if (b == 2)
{
    a = sqrt(4-b*c);
     printf ("Виконалсь друга умова\n%f",a);
}
if (b == 3)
{
     a = b/pow(c,2);
     printf ("Виконалсь третя умова\n%f",a);
}
if (b !=1 && b!=2 && b!=3)
{
  printf ("Ні одна з умов не виконалась");
}
    return 0;
}