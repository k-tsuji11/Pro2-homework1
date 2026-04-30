#include<stdio.h>

int main() {
    double a, b, c, avg;

    printf("enter 3 numbers:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    avg = (a + b + c) / 3.0;

    printf("average is %f\n", avg);

    return 0;
}