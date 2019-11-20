#include <stdio.h>
#include "myBank.h"
#define ACC_NUM 901
#define NUM_OF_ACCOUNTS 50

double acc_status[50][2];

void open_account(double amount)
{
    int acc;
    for (acc = 0; acc < NUM_OF_ACCOUNTS; acc++)
    {
        if (acc_status[acc][1] == 0)
        {
            acc_status[acc][1] = 1;
            acc_status[acc][0] = amount;
            printf("Your account number is: %d\n",ACC_NUM+acc);
            return;
        }
    }
    printf("No available accounts!\n");
}

void print_accounts()
{
    int acc;
    for (acc = 0; acc < NUM_OF_ACCOUNTS; acc++)
    {
        if (acc_status[acc][1] == 1)
        {
            printf("Account number: %d - Balance: %lf\n", ACC_NUM + acc, acc_status[acc][0]);
        }
    }
}

void check_balance(int account_number)
{
    int acc = account_number - ACC_NUM;
    if (acc_status[acc][1] == 0)
    {
        printf("No such account!\n");
        return;
    }
    printf("Balance for account: %d - %.2lf\n", account_number, acc_status[acc][0]);
}

void deposit(int account_number, double amount)
{
    int acc = account_number - ACC_NUM;
    if (acc_status[acc][1] == 0)
    {
        printf("No such account!\n");
        return;
    }
    acc_status[acc][0] = acc_status[acc][0] + amount;
    printf("New balance for %d - %.2lf\n",account_number, acc_status[acc][0]);
}
