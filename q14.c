#include <stdio.h>

int main() {
    int n_shares = 2000;
    float buy_price = 40.00;
    float sell_price = 42.75;
    float commission_rate = 0.03;
    float buy_amount = n_shares * buy_price;
    float buy_commission = buy_amount * commission_rate;
    float sell_amount = n_shares * sell_price;
    float sell_commission = sell_amount * commission_rate;

    printf("Amount paid for the stock: $%.2f\n", buy_amount);
    printf("Commission paid when buying the stock: $%.2f\n", buy_commission);
    printf("Amount the stock was sold for: $%.2f\n", sell_amount);

    return 0;
}

