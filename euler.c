#include <stdio.h>
#include <stdlib.h>
double f(double x,double y)
{
    double k=(x*x)-y;
    return k;
}
int main()
{

    double x,y,y1,xn,h;
    printf("Enter the value of x0:");
    scanf("%lf",&x);
    printf("Enter the value of y0:");
    scanf("%lf",&y);
    printf("Enter the step length:");
    scanf("%lf",&h);
    printf("Enter the value of xn:");
    scanf("%lf",&xn);
    printf("x\tf(x,y)\ty\n");
    printf("_________\n");
   do{
        printf("%.3lf\t%.3lf\t%.3lf\n",x,f(x,y),y);
        y1=y+h*f(x,y);
        x=x+h;
        y=y1;
    } while(x<=xn);
    printf("\nFinal answer for %.3lf is %.3lf\n",x,y);
    return 0;
}
