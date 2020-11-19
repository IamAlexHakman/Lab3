#include <stdio.h>
#include <math.h>
int main()
{
float d1,d2,d3,d4,s;
printf("введіть число d1 = ");
scanf("%f",&d1);
printf("введіть число d2 = ");
scanf("%f",&d2);
printf("введіть число d3 = ");
scanf("%f",&d3);
printf("введіть число d4 = ");
scanf("%f",&d4);
if(d1>d2 && d2>d3 && d3>d4)
{
  s=d1+d2+d3+d4/4;
  printf("Вони утворюють спадну послідовність, рахуєм середнє арифметичне\n%f",s);
}
else
{
  s=sqrt(d1*d2*d3*d4);
  printf("Вони не утворюють спадну послідовність, рахуєм середнє геометричне\n%f",s);
}
return 0;
}