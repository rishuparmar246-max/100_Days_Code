#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100.0;
    compoundInterest = principal * (pow(1 + (rate / 100.0), time) - 1);

    printf("Simple Interest=%g, Compound Interest=%g\n", simpleInterest, compoundInterest);

    return 0;
}