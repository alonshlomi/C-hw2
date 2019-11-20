#include <stdio.h>
#include "myBank.h"

int main()
{
    char trans_type;
    while (trans_type != 'E')
    {
        double amount,interest_rate;
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
            printf("Account number?: ");
            scanf(" %d",&account_number);
            printf("Amount?: ");
            scanf(" %lf",&amount);
            withdraw(account_number,amount);
            break;
        case 'C':
            printf("Account number?: ");
            scanf(" %d",&account_number);
            close_account(account_number);
            break;
        case 'I':
            printf("Interest rate?: ");
            scanf(" %lf",&interest_rate);
            interest(interest_rate);
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