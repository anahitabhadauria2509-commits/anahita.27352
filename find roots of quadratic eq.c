#include<stdio.h>
#include<math.h>
int main()
{
    int  a , b , c;
    float x1,x2;
    printf("enter coefficent of x^2= ");
    scanf("%d",&a);
    printf("enter coeffient of x= ");
    scanf("%d",&b);
    printf("enter the constant= ");
    scanf("%d",&c);
    if ((b*b)-4*a*c>=0)
    {
        printf("the roots of the euation exists");
        x1=((-b)+sqrt((b*b)-4*a*c))/2*a;
        x2=((-b)-sqrt((b*b)-4*a*c))/2*a;

    }
    printf("the roots of equation are:%f,%f",x1,x2);
    return 0;
}
