#include<stdio.h>
float input();
float my_sqrt(float n);
void output(float n, float sqrt_result);

int main()
{
 float n,sqrt_result;
 n=input();
 sqrt_result=my_sqrt(n);
 output(n,sqrt_result);
 return 0;
}

float input()
{
    float n;
    printf("enter a number\n");
    scanf("%f",&n);
    return n;
}
float my_sqrt(float n)
{
 int temp=0,sqrt;
sqrt=n/2;
while(sqrt!=temp)
{
    temp=sqrt;
    sqrt=(n/temp+temp)/2;
}
return sqrt;
}
void output(float n,float sqrt_result)
{
  printf("squareroot of %f is %f",n,sqrt_result);
}
