#include <stdio.h>

int main()
{
    int amount = 0, pin, balance = 50000 , maxAttempts = 3 , attempts = 0;
    char condition;

    printf("Welcome to BOB ATM\n");
    printf("Please insert your card \n");

    while (attempts < maxAttempts)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == 1234)
        {
            printf("PIN accepted!\n");
            break; 
        }
        else
        {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", maxAttempts - attempts);

            if (attempts == maxAttempts)
            {
                printf("Card blocked. Please try again after 24 hours.\n");
                return 0; // End the program if the maximum attempts are reached
            }
        }
    }

    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &amount);

    if (amount <= balance)
    {
        printf("Please collect your cash.\n");
        balance = balance - amount;

        printf("Do you want to check your balance (Y/N): ");
        scanf(" %c", &condition);

        if (condition == 'Y' || condition == 'y')
        {
            printf("\nBalance: %d\n", balance);
        }
        else
        {
            printf("\nThank you for the transaction.\n");
        }
    }
    else
    {
        printf("Insufficient Funds. Transaction failed!\n");
    }

    return 0;
}
