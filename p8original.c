#include<stdio.h>
typedef struct complex
{
    float real,imaginary;
}
complex;

int get_n()
{
    int n;
    printf("how many complex numbers?\n");
    scanf("%d",&n);
    return n;
}
void input(int n , complex a[n])
{
  for(int i=0;i<n;i++)
  {
      printf("enter real part");
      scanf("%f",&a[i].real);
      printf("enter imaginary part");
      scanf("%f",&a[i].imaginary);
     
  }
}
complex add(int n,complex a[n])
{
    complex m;
    m.real=0;m.imaginary=0;
 for(int i=0;i<n;i++)
 {
     m.real=m.real+a[i].real;
     m.imaginary=m.imaginary+a[i].imaginary;
   
 }
 return m;
}
void output(int n,complex a[n],complex result)
{
   
    printf("sum is %f+%fi",result.real,result.imaginary);
    
}
int main()
{
    int n;
   n= get_n();
   complex a[100],result;
   input(n,a);
   result=add(n,a);
output(n,a,result);
return 0;
}