#include <stdio.h>

int main() {
    const int COOKIES_PER_BATCH = 48;
    const float SUGAR_PER_BATCH = 1.5;
    const float BUTTER_PER_BATCH = 1.0;
    const float FLOUR_PER_BATCH = 2.75;
    
    int num_cookies;
    printf("Enter the number of cookies you want to make: ");
    scanf("%d", &num_cookies);
    
    float sugar = SUGAR_PER_BATCH * num_cookies / 48;
    float butter = BUTTER_PER_BATCH * num_cookies / 48;
    float flour = FLOUR_PER_BATCH * num_cookies / 48;
    
    printf("For %d cookies, you need:\n", num_cookies);
    printf("%.2f cups of sugar\n", sugar);
    printf("%.2f cups of butter\n", butter);
    printf("%.2f cups of flour\n", flour);
    
    return 0;
}

