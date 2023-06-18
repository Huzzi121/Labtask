#include <stdio.h>

int main() {
    int population = 80000;
    int total_literacy_percent = 48;
    int men_percent = 52;
    int litrate_men_percent = 35;
    int men_count, women_count, litrate_men_count, illiterate_men_count, illiterate_women_count;

    men_count = population * men_percent / 100;
    women_count = population - men_count;
    
    litrate_men_count = population * litrate_men_percent / 100;
    
    illiterate_men_count = men_count - litrate_men_count;
    illiterate_women_count = women_count - (population * total_literacy_percent / 100 - litrate_men_count);

    printf("Number of illiterate men: %d\n", illiterate_men_count);
    printf("Number of illiterate women: %d\n", illiterate_women_count);
    
    return 0;
}

