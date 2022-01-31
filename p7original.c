#include<stdio.h>
typedef struct complex
{
    int real,imaginary;
}
complex;
complex input()
{
    complex k;
    printf("enter real part\n");
    scanf("%d",&k.real);
    printf("enter imaginary part\n");
    scanf("%d",&k.imaginary);
    return k;
}
complex add(complex a, complex b)
{
    complex z;
    z.real=a.real+b.real;
    z.imaginary=a.imaginary+b.imaginary;
    return z;
}
void output(complex a, complex b,complex result)
{
    printf("%d+%di +%d+%di is %d+%di",a.real,a.imaginary,b.real,b.imaginary,result.real,result.imaginary);
    return;
}
int main()
{
    complex a,b,result;
    a=input();
    b=input();
    result=add(a,b);
    output(a,b,result);
    return 0;
}
