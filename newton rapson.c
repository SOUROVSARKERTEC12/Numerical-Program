
#include<stdio.h>
#include<math.h>
#define f(x) pow(a,3)-3*a+1;
#define fd(x) 3*pow(a,2)-3;
int main()
{
    double a,b,c,d,h,k,x,y;
    int i,j,m,n;
    printf("Enter the value of xn: ");
    scanf("%lf",&a);
    printf("Enter itteration number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    x=f(a);
    y=fd(x);
    h=-(x/y);
    k=h+a;

    a=k;
    }
     printf("\nThe approximation to the root is %.6lf which is upto 6D",k);
    return 0;

}
