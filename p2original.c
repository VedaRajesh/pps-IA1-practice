#include<stdio.h>
int input()
{
    int a;
    scanf("%d",&a);
    return a;
}
int cmp(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    return c;
}
void output(int a,int b,int c,int largest)
{
    if (largest==a)
    printf("%d is greatest\n",a);
    else if(largest==b)
    printf(" %d is greatest\n",b);
    else 
    printf("%d is greatest",c);
}
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=cmp(a,b,c);
    output(a,b,c,largest);
    return 0;
}
