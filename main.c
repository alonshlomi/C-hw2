#include <stdio.h>
#include "myBank.h"

void clear()
{
  while (getchar() != '\n')
    ;
}

int main()
{
  char trans_type;
  while (trans_type != 'E')
  {
    double amount, interest_rate;
    int account_number;
    printf("Transaction type?: ");
    scanf(" %c", &trans_type);
    switch (trans_type)
    {
    case 'O':
      printf("Initial deposit?: ");
      if(scanf(" %lf", &amount) != 1) //check that it is number
      {
        printf("Wrong input!\n");
        break;
      }
      amount = set2AfterPoint(amount);
      open_account(amount);
      break;

    case 'B':
      printf("Account number?: ");

      if (scanf(" %d", &account_number) != 1) //check that it is number
      {
        printf("Wrong input!\n");
        break;
      }
      check_balance(account_number);
      break;

    case 'D':
      printf("Account number?: ");

      if (scanf(" %d", &account_number) != 1) //check that it is number
      {
        printf("Wrong input!\n");
        break;
      }

      printf("Amount?: ");

      if (scanf(" %lf", &amount) != 1) //check that it is number
      {
        printf("Wrong input!\n");
        break;
      }
      amount = set2AfterPoint(amount);
      deposit(account_number, amount);
      break;

    case 'W':
      printf("Account number?: ");

      if (scanf(" %d", &account_number) != 1) //check that it is number
      {
        printf("Wrong input!\n");
        break;
      }

      printf("Amount?: ");

      if (scanf(" %lf", &amount) != 1) //check that it is number
      {
        printf("Wrong input!\n");
        break;
      }
      amount = set2AfterPoint(amount);
      withdrawl(account_number, amount);
      break;

    case 'C':
      printf("Account number?: ");

      if (scanf(" %d", &account_number) != 1) //check that it is number
      {
        printf("Wrong input!\n");
        break;
      }
      close_account(account_number);
      break;

    case 'I':
      printf("Interest rate?: ");

    if (scanf(" %lf", &interest_rate) != 1) //check that it is number
      {
        printf("Wrong input!\n");
        break;
      }
      interest(interest_rate);
      break;

    case 'P':
      print_accounts();
      break;

    case 'E':
      printf("Exiting..\n");
      exit_prog();
      break;

    default:
      printf("Wrong input!\n");
      break;
    }
  }
}
