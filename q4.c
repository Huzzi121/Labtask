#include <stdio.h>

int main() {
    int number, reversed_number = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed_number);

    return 0;
}

