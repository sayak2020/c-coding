#include<stdio.h>
float f(float x)
{
    return((x*x*x)-x-4);
}
int main()
{   int count=0;
    float a,b;
    float x0,acc;
    printf("\n Enter accuraccy");
    scanf("%f",&acc);
    printf("\n");
    do{
        printf("\n Enter the range");
        scanf("%f%f",&a,&b);
    }while(f(a)*f(b)>0.0);
    printf("\n a \t  b \t  f{a]  \t  f[b} \t x0 \n");
    do{
        x0=(a+b)/2;
        printf("\n %.3f \t %.3f \t %.3f \t %.3f \t %.3f",a,b,f(a),f(b),x0);
        if(f(x0)>0)
            b=x0;
        else if(f(x0)<0)
            a=x0;
        else
            break;
        count++;


    }while(fabs(b-a)>acc);
    printf("\n Root of the equation is %.3f , no of iter= %d",x0,count);
}
