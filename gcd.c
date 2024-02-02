//program to find gcd of two numbers

#include <stdio.h>

int GCD(int, int);

int main() {
    int num1, num2, res;
    printf("\nEnter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    res = GCD(num1, num2);
    printf("\nGCD of %d and %d is %d\n", num1, num2, res);
    return 0;
}

int GCD(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return GCD(y, x % y);
    }
}
