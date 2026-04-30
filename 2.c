#include <stdio.h>

int main() {
    double a, b, c;
    int avg;

    printf("D‚«‚È”š‚ğ3‚Â“ü‚ê‚éƒhƒ“!\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    avg = (int)((a + b + c) / 3.0);

    printf("average (integer) is %d\n", avg);

    return 0;
}