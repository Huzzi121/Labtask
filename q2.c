#include <stdio.h>

int main() {
    int number, digit, new_number = 0, multiplier = 1;

    // Ask the user to input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Add one to each digit of the number and build a new number
    while (number != 0) {
        digit = (number % 10) + 1;
        if (digit == 10) {
            digit = 0;
        }
        new_number += digit * multiplier;
        multiplier *= 10;
        number /= 10;
    }

    // Display the new number
    printf("New number: %d\n", new_number);

    return 0;
}

