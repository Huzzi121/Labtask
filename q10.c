#include <stdio.h>

int main() {
    const float TAX_RATE = 0.07;
    float item_price, subtotal=0, sales_tax, total;
    
    for(int i=1; i<=5; i++) 
	{
    	printf("Enter the price of item %d: ", i);
        scanf("%f", &item_price);
        subtotal += item_price;
    }
    
    sales_tax = subtotal * TAX_RATE;
    total = subtotal + sales_tax;
    
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Sales tax (7%%): $%.2f\n", sales_tax);
    printf("Total: $%.2f\n", total);
    
    return 0;
}

