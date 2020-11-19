#include <stdio.h>
#include <math.h>

int main()
{
    int x,z;
    float y,b,c;
    printf("x=");
    scanf("%d",&x);
    printf("z=");
    scanf("%d",&z);
    c=sqrt(x)+2*sqrt(x*z);
    b=sqrt(x)-2*sqrt(x*z);
if (x*z==-1 || z<0 || x<0 )
 {
  printf("Корінь від'ємного числа взяти не можна.");
 }
   else if (b==0)
   {
     printf("Виконується ділення на нуль.");
   }
   else if (x==0 || z==0)
   {
     printf("Корінь з нуля взяти не можна.");
   }
   else
   {
     y=c/b;
    printf("Значення функції a = %f",y);
   }
   return 0;
 }