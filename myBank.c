#include <stdio.h>
#include "myBank.h"
#define ACC_NUM 901
#define NUM_OF_ACCOUNTS 50
#define ACC_PARAM 2
#define ACC_BALANCE 0
#define ACC_FLAG 1

double acc_status[NUM_OF_ACCOUNTS][ACC_PARAM];

void open_account(double amount)
{
    int acc;
    for (acc = 0; acc < NUM_OF_ACCOUNTS; acc++)
    {
        if (acc_status[acc][ACC_FLAG] == 0)
        {
            acc_status[acc][ACC_FLAG] = 1;
            acc_status[acc][ACC_BALANCE] = amount;
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
        if (acc_status[acc][ACC_FLAG] == 1)
        {
            printf("Account number: %d - Balance: %.2lf\n", ACC_NUM + acc, acc_status[acc][ACC_BALANCE]);
        }
    }
}

void check_balance(int account_number)
{
    int acc = account_number - ACC_NUM;
    if (acc >= NUM_OF_ACCOUNTS || acc < 0 || acc_status[acc][ACC_FLAG] == 0)
    {
        printf("No such account!\n");
        return;
    }
    printf("Balance for account: %d - %.2lf\n", account_number, acc_status[acc][ACC_BALANCE]);
}

void deposit(int account_number, double amount)
{
    int acc = account_number - ACC_NUM;
    if (acc >= NUM_OF_ACCOUNTS || acc < 0 || acc_status[acc][ACC_FLAG] == 0)
    {
        printf("No such account!\n");
        return;
    }
    acc_status[acc][ACC_BALANCE] = acc_status[acc][ACC_BALANCE] + amount;
    printf("New balance for %d - %.2lf\n",account_number, acc_status[acc][ACC_BALANCE]);
}

void withdraw(int account_number,double amount)
{
    int acc = account_number - ACC_NUM;
    if(acc >= NUM_OF_ACCOUNTS || acc < 0 || acc_status[acc][ACC_FLAG] == 0) 
    {
        printf("No such account!\n");
        return;
    }
    acc_status[acc][ACC_BALANCE] = acc_status[acc][ACC_BALANCE] - amount;
    printf("New balance for %d - %.2lf\n",account_number, acc_status[acc][ACC_BALANCE]);
}

void close_account(int account_number)
{
    int acc = account_number - ACC_NUM;
    if(acc >= NUM_OF_ACCOUNTS || acc < 0 || acc_status[acc][ACC_FLAG] == 0) 
    {
        printf("No such account!\n");
        return;
    }
    acc_status[acc][ACC_FLAG] = 0;
    acc_status[acc][ACC_BALANCE] = 0;
    printf("Account %d has been closed successfully\n", account_number);
}

void interest(double interest_rate) 
{
    interest_rate = interest_rate / 100;
    for(int acc=0;acc<NUM_OF_ACCOUNTS;acc++)
    {
        if(acc_status[acc][ACC_FLAG] == 1) 
        {
            acc_status[acc][ACC_BALANCE] = acc_status[acc][ACC_BALANCE] + acc_status[acc][ACC_BALANCE]*interest_rate;
        }
    }
    printf("The interest was successfully added!\n");
}
