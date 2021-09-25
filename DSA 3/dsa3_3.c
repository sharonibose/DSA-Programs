//Add two complex numbers by passing structures to a function

#include<stdio.h>

struct complex
{
    int real, imaginary;
};

struct complex sum (struct complex a, struct complex b)
{
    struct complex s;
    s.real = a.real + b.real;
    s.imaginary = a.imaginary + b.imaginary;
    return s;
};

int main()
{
    struct complex a, b, s;
    printf("Enter real part of first number: ");
    scanf("%d", &a.real);

    printf("Enter imaginary part of first number: ");
    scanf("%d", &a.imaginary);
    
    printf("Enter real part of second number: ");
    scanf("%d", &b.real);

    printf("Enter imaginary part of second number: ");
    scanf("%d", &b.imaginary);
    
    s=sum(a,b);
    printf("\nSum = %d + %di", s.real, s.imaginary);

    return 0;
}