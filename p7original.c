#include<stdio.h>

typedef struct Complex
{
    float real;
    float imaginary;
}
Complex;

Complex input()
{
    Complex c;
    printf("Enter Real part number: ");
    scanf("%f", &c.real);
    printf("Enter Imaginary part number: ");
    scanf("%f", &c.imaginary);
    return c;
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum)
{
    printf("the sum of %0.1f + %0.1fi and %0.1f + %0.1fi is %0.1f + %0.1fi\n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
int main()
{
    Complex a, b, sum;
    a = input();
    b = input();
    sum = add(a, b);
    output(a, b, sum);
    return 0;
}