#include <stdio.h>

void triple(int x);
int triple_return(int x);
void add_ten(int a, int b);

void triple(int x) {
    x = x * 3;
    printf("Inside triple: %d\n", x);
}

int triple_return(int x) {
    return x * 3;
}

void add_ten(int a, int b) {
    a = a + 10;
    b = b + 10;
    printf("Inside add_ten: a = %d, b = %d\n", a, b);
}

int main(void) {
    int n = 7;

    triple(n);
    printf("n after triple(n): %d\n", n);

    int result = triple_return(n);
    printf("result: %d, n: %d\n", result, n);

    int x = 5, y = 20;
    add_ten(x, y);
    printf("x: %d, y: %d in main\n", x, y);

    return 0;
}