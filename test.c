#include<stdio.h>

void swap(int *p,int *q);
int main()

{
 int a,b;
 do
 {
  printf("enter num1");
  scanf("%d",&a);
  printf("enter num2");
  scanf("%d",&b);
 }while(a>0 && b>0);
 swap(a,b);
}

void swap(int *p,int *q)
{
  int t;
   t=*p;
   *p=*q;
   *q=t;
  printf("num1=%d \nnum2=%d",*p,*q);
}