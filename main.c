#include <stdio.h>
#include "myBank.h"

void clear() {
    while(getchar() != '\n');
}

int main()
{
    char trans_type;
    while (trans_type != 'E')
    {
        double amount,interest_rate;
        int account_number;
        int check_amount,check_account;
        printf("Transaction type?: ");
        scanf(" %c", &trans_type);
        switch (trans_type)
        {
        case 'O':
            printf("Initial deposit?: ");
            check_amount = scanf(" %lf",&amount);
            if(check_amount != 1) {
                printf("Wrong input!\n");
                clear();
                break;
            }
            open_account(amount);
            break;
        case 'B':
            printf("Account number?: ");
            check_account = scanf(" %d",&account_number);
            if(check_account != 1) {
                printf("Wrong input!\n");
                clear();
                break;
            }
            check_balance(account_number);
            break;
        case 'D':
            printf("Account number?: ");
            check_account = scanf(" %d",&account_number);
            clear();
            printf("Amount?: ");
            check_amount = scanf(" %lf",&amount);
            if(check_account != 1 || check_amount != 1) {
                printf("Wrong input!\n");
                clear();
                break;
            }
            deposit(account_number,amount);
            break;
        case 'W':
            printf("Account number?: ");
            check_account = scanf(" %d",&account_number);
            clear();
            printf("Amount?: ");
            check_amount = scanf(" %lf",&amount);
            if(check_account != 1 || check_amount != 1) {
                printf("Wrong input!\n");
                clear();
                break;
            }
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