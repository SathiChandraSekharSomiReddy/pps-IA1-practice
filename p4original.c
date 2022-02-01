#include <stdio.h>
int input()
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    return n;
}

int aray(int n,int a[10])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:\n");
        scanf("%d",&a[i]);
    }
}
int add(int n,int a[10])
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    return sum;
}
int output(int sum)
{
    printf("sum is %d",sum);
}
int main()
{
    int n,sum,a[10];
    n = input();
    aray(n,a);
    sum = add(n,a);
    output(sum);
    return 0;
}