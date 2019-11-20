#include <stdio.h>
#include "myBank.h"

int main()
{
    char trans_type;
    while (trans_type != 'E')
    {
        double amount;
        int account_number;
        printf("Transaction type?: ");
        scanf(" %c", &trans_type);
        switch (trans_type)
        {
        case 'O':
            printf("Initial deposit?: ");
            scanf(" %lf",&amount);
            open_account(amount);
            break;
        case 'B':
            printf("Account number?: ");
            scanf(" %d",&account_number);
            check_balance(account_number);
            break;
        case 'D':
            printf("Account number?: ");
            scanf(" %d",&account_number);
            printf("Amount?: ");
            scanf(" %lf",&amount);
            deposit(account_number,amount);
            break;
        case 'W':
            printf("Case W\n");
            break;
        case 'C':
            printf("Case C\n");
            break;
        case 'I':
            printf("Case I\n");
            break;
        case 'P':
            print_accounts();
            break;
        case 'E':
            break;

        default:
            printf("Wrong input!\n");
            break;
        }
    }
}