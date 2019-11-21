#include <stdio.h>
#include "myBank.h"

void clear () {
  while(getchar() != '\n');
}


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
            while(scanf(" %lf",&amount) != 1) //check that it is integer
            {
              printf("Please enter an integer: ");
              clear();
            }
            open_account(amount);
            break;

        case 'B':
            printf("Account number?: ");

            while(scanf(" %d",&account_number) != 1) //check that it is integer
            {
              printf("Please enter an integer: ");
              clear();
            }
            check_balance(account_number);
            break;

        case 'D':
            printf("Account number?: ");


            while(scanf(" %d",&account_number) != 1) //check that it is integer
            {
              printf("Please enter an integer: ");
              clear();
            }

            printf("Amount?: ");

            while(scanf(" %lf",&amount) != 1) //check that it is integer
            {
              printf("Please enter an integer: ");
              clear();
            }


            deposit(account_number,amount);
            break;

        case 'W':
            printf("Account number?: ");



            while(scanf(" %d",&account_number) != 1) //check that it is integer
            {
              printf("Please enter an integer: ");
              clear();
            }

            printf("Amount?: ");

            while(scanf(" %lf",&amount) != 1) //check that it is integer
            {
              printf("Please enter an integer: ");
              clear();
            }
            withdraw(account_number,amount);
            break;

        case 'C':
            printf("Account number?: ");

            while(scanf(" %d",&account_number) != 1) //check that it is integer
            {
              printf("Please enter an integer: ");
              clear();
            }
            close_account(account_number);
            break;

        case 'I':
            printf("Interest rate?: ");

            while(scanf(" %lf",&interest_rate) != 1) //check that it is integer
            {
              printf("Please enter an integer: ");
              clear();
            }
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
