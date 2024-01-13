#include <stdio.h>

int fib(int val, int a, int b) {
    if (val > 0) {
        int temp = b;
        b = a + b;
        a = temp;

        printf("%d, ", b);


        fib(val - 1, a, b);
    }
}

int main() {
    int val, a = 1, b = 1;

    printf("Enter Number of Fibonacci Terms: ");
    scanf("%d", &val);

    if (val >= 1) {
        printf("%d, %d, ", a, b);
        fib(val - 2, a, b);
    } else if (val == 1) {
        printf("%d", a);
    }

    return 0;
}
