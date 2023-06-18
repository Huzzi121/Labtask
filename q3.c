#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}

