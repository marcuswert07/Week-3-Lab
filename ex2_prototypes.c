#include <stdio.h>

int clamp(int val, int lo, int hi);
int absolute_value(int x);
double celsius_to_fahrenheit(double c);
int is_even(int n);

int main(void) {
    printf("%d\n", clamp(5, 1, 10));
    printf("%d\n", absolute_value(-25));
    printf("%.2f\n", celsius_to_fahrenheit(0.0));
    printf("%d\n", is_even(4));

    return 0;
}

int clamp(int val, int lo, int hi) {
    if (val < lo) {
        return lo;
    }
    if (val > hi) {
        return hi;
    }
    return val;
}

int absolute_value(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

double celsius_to_fahrenheit(double c) {
    return c * 9.0 / 5.0 + 32.0;
}

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}