#include <stdio.h>
int main() {
    int base, exp;
    long long result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    for (int i = 1; i<= exp; i++) {
        result *= base;
    }
    printf("Answer = %.0lld", result);
    return 0;
}

