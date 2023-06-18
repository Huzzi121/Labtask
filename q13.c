#include <stdio.h>

int main() {
    int males, females, total;
    float male_percent, female_percent;
    
    printf("Enter the number of males in the class: ");
    scanf("%d", &males);
    printf("Enter the number of females in the class: ");
    scanf("%d", &females);

    total = males + females;

    male_percent = ((float)males / total) * 100;
    female_percent = ((float)females / total) * 100;

    printf("Percentage %% of males in the class: %.2f%%\n", male_percent);
    printf("Percentage of females in the class: %.2f%%\n", female_percent);

    return 0;
}

