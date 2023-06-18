#include <stdio.h>

int main() {
    int number, first_digit, last_digit, sum;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    last_digit = number % 10;
    first_digit = number / 1000;

    sum = first_digit + last_digit;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}

