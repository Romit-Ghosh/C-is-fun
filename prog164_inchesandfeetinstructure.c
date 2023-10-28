#include <stdio.h>

struct distance
{
    int feet;
    float inches;
};

int main()
{
    struct distance distance1, distance2, total_distance;

    // Accept distances from user
    printf("Enter first distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%f", &distance1.inches);

    printf("\nEnter second distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%f", &distance2.inches);

    // Add the distances
    total_distance.inches = distance1.inches + distance2.inches;
    total_distance.feet = distance1.feet + distance2.feet;
    if (total_distance.inches >= 12)
    {
        total_distance.inches -= 12;
        total_distance.feet++;
    }

    // Display the total distance
    printf("\nTotal distance: %d feet %.2f inches", total_distance.feet, total_distance.inches);

    return 0;
}
