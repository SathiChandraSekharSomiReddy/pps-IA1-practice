#include <stdio.h>
int input()
{
  int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if((b>a)&&(b>c))
  return b;
  else
  return c;
}
int output(int a,int b,int c,int largest)
{
  printf("The largest number out of %d,%d,%d is %d",a,b,c,largest);
  return 0;
}
int main()
{
  int x,y,z,largest;
  x = input();
  y = input();
  z = input();
  largest = cmp(x,y,z);
  output(x,y,z,largest);
  return 0;
}