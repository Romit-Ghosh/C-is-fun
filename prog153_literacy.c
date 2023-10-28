#include <stdio.h>

int main()
{
    int population = 80000;
    int men_percentage = 52;
    int literacy_percentage = 48;
    int literate_men_percentage = 35;

    // Calculate the number of men and women
    int num_men = (population * men_percentage) / 100;
    int num_women = population - num_men;

    // Calculate the number of literate people and illiterate people
    int num_literate = (population * literacy_percentage) / 100;
    int num_illiterate = population - num_literate;

    // Calculate the number of literate men and women
    int num_literate_men = (num_men * literate_men_percentage) / 100;
    int num_literate_women = num_literate - num_literate_men;

    // Calculate the number of illiterate men and women
    int num_illiterate_men = num_men - num_literate_men;
    int num_illiterate_women = num_women - num_literate_women;

    // Output the results
    printf("Total number of illiterate men: %d\n", num_illiterate_men);
    printf("Total number of illiterate women: %d\n", num_illiterate_women);

    return 0;
}
