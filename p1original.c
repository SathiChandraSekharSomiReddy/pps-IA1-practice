#include <stdio.h>

int input(int*a,int*b)
{
  printf("Enter two numbers:\n");
  scanf("%d%d",a,b);
  return 0;
}
int add(int a,int b,int*sum)
{
  *sum = a+b;
}
int output(int a,int b,int sum)
{
  printf("The sum of %d+%d is %d",a,b,sum);
}
int main()
{
  int x,y,sum;
  input(&x,&y);
  add(x,y,&sum);
  output(x,y,sum);
  return 0;
}