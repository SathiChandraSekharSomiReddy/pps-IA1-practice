#include <stdio.h>

typedef struct Complex
{
    float real;
    float imaginary;
}
Complex;
int get_n()
{
    int n;
    printf("Enter the number of Complex numbers: ");
    scanf("%d",&n);
    return n;
}

Complex input_Complex()
{
    Complex c;
    printf("Enter Real part: ");
    scanf("%f",&c.real);
    printf("Enter Imaginary part: ");
    scanf("%f",&c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    for(int i=0; i<n; i++)
    {
        c[i] = input_Complex();
    }
}

Complex add(Complex a, Complex b)
{
    Complex res;
    res.real = a.real + b.real;
    res.imaginary = a.imaginary + b.imaginary;
    return res;
}

Complex add_n_Complex(int n, Complex c[n])
{
    Complex res;
    res.real = 0;
    res.imaginary = 0;
    for(int i=0; i<n; i++)
    {
        res = add(res, c[i]);
    }
    return res;
}
void output(int n, Complex c[n], Complex res)
{
    if(n==1)
    {
        printf("The sum of %0.1f+%0.1fi is %0.1f+%0.1fi\n",c[0].real,c[0].imaginary,res.real,res.imaginary);
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            printf("%0.1f+%0.1fi\n",c[i].real,c[i].imaginary);
        }
        printf("is %0.1f+%0.1fi\n",res.real,res.imaginary);
    }
}
int main()
{
    int n;
    n = get_n();
    Complex c[n],res;
    input_n_complex(n,c);
    res = add_n_Complex(n,c);
    output(n,c,res);
    return 0;
}