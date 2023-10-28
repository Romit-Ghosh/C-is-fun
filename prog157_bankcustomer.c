#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 200

struct Customer
{
    int accountNumber;
    char name[50];
    float balance;
};

struct Customer customers[MAX_CUSTOMERS];
int numCustomers = 0;

void printAccountsBelow100()
{
    printf("Accounts with balance below Rs. 100:\n");
    for (int i = 0; i < numCustomers; i++)
    {
        if (customers[i].balance < 100.0)
        {
            printf("%d %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

void depositOrWithdraw(int accountNumber, float amount, int code)
{
    int found = 0;
    for (int i = 0; i < numCustomers; i++)
    {
        if (customers[i].accountNumber == accountNumber)
        {
            found = 1;
            if (code == 1)
            { // deposit
                customers[i].balance += amount;
                printf("Rs. %.2f deposited in account %d\n", amount, accountNumber);
            }
            else if (code == 0)
            { // withdrawal
                if (customers[i].balance >= amount)
                {
                    customers[i].balance -= amount;
                    printf("Rs. %.2f withdrawn from account %d\n", amount, accountNumber);
                }
                else
                {
                    printf("The balance is insufficient for specified withdrawal\n");
                }
            }
            else
            {
                printf("Invalid code\n");
            }
            break;
        }
    }
    if (!found)
    {
        printf("Account not found\n");
    }
}

int main()
{
    // add some sample data
    // customers[numCustomers++] = {1, "Alice", 500.0};
    // customers[numCustomers++] = {2, "Bob", 50.0};
    // customers[numCustomers++] = {3, "Charlie", 2000.0};

    // print accounts with balance below Rs. 100
    printAccountsBelow100();

    // deposit Rs. 100 in account 2
    depositOrWithdraw(2, 100.0, 1);

    // withdraw Rs. 200 from account 2 (insufficient balance)
    depositOrWithdraw(2, 200.0, 0);

    // deposit Rs. 500 in account 3
    depositOrWithdraw(3, 500.0, 1);

    // withdraw Rs. 1000 from account 1
    depositOrWithdraw(1, 1000.0, 0);

    // print updated balances
    printf("\nUpdated account balances:\n");
    for (int i = 0; i < numCustomers; i++)
    {
        printf("%d %s %.2f\n", customers[i].accountNumber, customers[i].name, customers[i].balance);
    }

    return 0;
}
