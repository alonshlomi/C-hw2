#define NUM_OF_ACCOUNTS 50
#define ACC_PARAM 2
extern double acc_status[NUM_OF_ACCOUNTS][ACC_PARAM];
void open_account(double amount);
void print_accounts();
void check_balance(int account_number);
void deposit(int account_number,double amount);
void withdrawl(int account_number,double amount);
void close_account(int account_number);
void interest(double interest_rate);
void exit_prog();
double set2AfterPoint(double x);
