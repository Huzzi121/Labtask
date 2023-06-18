#include <stdio.h>

int main() {
    int amount, hundreds, fifty, ten;
    
    printf("Enter the amount to be withdrawn in hundreds: ");
    scanf("%d", &amount);
    
    hundreds = amount / 100;
    amount = amount % 100;
    fifty = amount / 50;
    amount = amount % 50;
    ten = amount / 10;
    
    printf("Total number of 100 rupee notes: %d\n", hundreds);
    printf("Total number of 50 rupee notes: %d\n", fifty);
    printf("Total number of 10 rupee notes: %d\n", ten);
    
    return 0;
}

