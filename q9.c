#include <stdio.h>

int main() {
    float initial_velocity, acceleration, time_elapsed;
    float final_velocity, distance_traveled;
    
    printf("Enter the initial velocity: ");
    scanf("%f", &initial_velocity);
    
    printf("Enter the acceleration: ");
    scanf("%f", &acceleration);
    
    printf("Enter the time elapsed: ");
    scanf("%f", &time_elapsed);
    
    final_velocity = initial_velocity + acceleration * time_elapsed;
    distance_traveled = initial_velocity * time_elapsed + 0.5 * acceleration * time_elapsed * time_elapsed;
    
    printf("Final velocity: %.2f\n", final_velocity);
    printf("Distance traveled: %.2f\n", distance_traveled);
    
    return 0;
}

