#include <stdio.h>

int main() {
    float food_charge, tip_amount, tax_amount, total_bill;
    const float TIP_RATE = 0.18;
    const float TAX_RATE = 0.07;
    
    printf("Enter the charge for the food: ");
    scanf("%f", &food_charge);
    
    tip_amount = food_charge * TIP_RATE;
    tax_amount = food_charge * TAX_RATE;
    total_bill = food_charge + tip_amount + tax_amount;
    
    printf("Food charge: $%.2f\n", food_charge);
    printf("Tip amount (18%%): $%.2f\n", tip_amount);
    printf("Sales tax (7%%): $%.2f\n", tax_amount);
    printf("Total bill: $%.2f\n", total_bill);
    
    return 0;
}

