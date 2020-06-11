#include<stdio.h>
float f(float x)
{
    return((x*x*x)-x-4);
}
float df(float x)
{
    return((3*x*x)-1);
}
int main()
{
    int count=0;
    float a,b,acc,x0,x1;
    printf("\n Enter accuracy..");
    scanf("%f",&acc);
    do{
        printf("\n Enter the range ");
        scanf("%f%f",&a,&b);
    }while(f(a)*f(b)>0);
    x0=(a+b)/2;
    printf("\n x0 \t fx0 \t dfx \t x1 \t |x1-x0|");
    do{
        if(count!=0)
            x0=x1;
        x1=x0-(f(x0)/df(x0));
        printf("\n %.3f\t%.3f\t%.3f\t%.3f\t%.3f\t",x0,f(x0),df(x0),x1,fabs(x1-x0));
        ++count;
    }while(fabs(x1-x0)>acc);
    printf("\n Root is %.3f no. of itr= %d",x1,count);
    return 0;


}
