#include<stdio.h>
#include<conio.h>
#include<math.h>
#define ESP 0.0001
#define F(x) pow(x,3)-pow(x,2)-1
void main()
{
  float x0,x1,x2,f1,f2,f0;
  int count=0;

  do
  {
  printf("\nEnter the value of x0: ");
  scanf("%f",&x0);
  }while(F(x0) > 0);
  do
  {
  printf("\nEnter the value of x1: ");
  scanf("%f",&x1);
  }while(F(x1) < 0);


  do
  {
  f0=F(x0);
  f1=F(x1);
  x2=x0-((f0*(x1-x0))/(f1-f0));
  f2=F(x2);
  printf("\n%f %f %f %f %f %f",x0,x1,x2,f0,f1,f2);
  if(f0*f2<0)
   {
    x1=x2;
   }
   else
   {
    x0 = x2;
   }
  }while(fabs(f2)>ESP);
printf("\n\nApp.root = %f",x2);
getch();
}
