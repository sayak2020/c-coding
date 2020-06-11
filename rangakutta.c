#include<stdio.h.>
float f(float x,float y)
{
    return (x+y);
}
int main()
{
    float x0,y0,xn,h;
    float s1,s2,s3,s4,m,y1;
    int k=0;
    printf("\n Enter the value of x0 and yo");
    scanf("%f%f",&x0,&y0);
    printf("\n Eter value of xn");
    scanf("%f",&xn);
    printf("\n Enter h ");
    scanf("%f",&h);
    printf("\n x0\t y0\t y1 \n");
    do{
        s1=h*f(x0,y0);
        s2=f((x0+(h/2)),(y0+s1*(h/2)));
        s3=f((x0+(h/2)),(y0+s2*(h/2)));
        s4=f((x0+h),(y0+s3*h));
        m=(s1+2*s2+2*s3+s4)/6;
        y1=y0+m*h;
        printf("\n %.3f\t %.3f\t %.3f\t",x0,y0,y1);
        k=k+1;
        y0=y1;
        x0=x0+h;
    }while(x0<=xn);
    printf("\n At xn= %.3f yn is %.3f after %d itration ",xn,y1,k);
    return 0;
}
