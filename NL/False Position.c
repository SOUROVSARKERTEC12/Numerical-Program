#include<stdio.h>
#include<math.h>
#define MAX_ITER 10
double func(double x)
{
    return (cos(x)-x*exp(x));
}

void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        printf("You have not assumed right a and b");
    }
    double c = a;


    for (int i = 0; i < MAX_ITER; i++)
    {
        // Find the point that touches x axis
        c = (a * func(b) - b * func(a))
            / (func(b) - func(a));
        // Check if the above found point is root
        if (func(c) == 0)
        {
            break;
        }
        // Decide the side to repeat the steps
        else if (func(c) * func(a) < 0){
            b = c;
        //printf("The value of root is : %lf\n ",b);
        }
        else{
            a = c;
        printf("The value of root is : %lf\n ",a);
        }


    }
    printf("The value of root is : %lf",c);
}


void main()
{
    double a = 0, b = 1;
    regulaFalsi(a, b);
}

