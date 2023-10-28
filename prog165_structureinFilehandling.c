#include <stdio.h>
#include <stdlib.h>

struct Product
{
    char item_name[50];
    float item_price;
};

int main()
{
    // declare an array of 10 product structures
    struct Product products[10];

    // get product details from user and store them in a file
    FILE *fptr = fopen("products.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter details of 10 products:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Product %d:\n", i + 1);
        printf("Item name: ");
        scanf("%s", products[i].item_name);
        printf("Item price: ");
        scanf("%f", &products[i].item_price);
        fprintf(fptr, "%s %f\n", products[i].item_name, products[i].item_price);
    }

    fclose(fptr);

    // read product details from file and find the item with minimum cost
    fptr = fopen("products.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    struct Product min_product;
    min_product.item_price = 9999999; // set an initial high value

    while (!feof(fptr))
    {
        struct Product p;
        fscanf(fptr, "%s %f", p.item_name, &p.item_price);
        if (p.item_price < min_product.item_price)
        {
            min_product = p;
        }
    }

    fclose(fptr);

    printf("Product with minimum cost: %s\n", min_product.item_name);

    return 0;
}
