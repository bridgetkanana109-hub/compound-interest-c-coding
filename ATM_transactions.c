/*
Name:Bridget Kanana
Reg No:CT101/G/26558/25
Description: ATM_transactions
*/
#include <stdio.h>

int main() {
    float balance;
    float withdraw;

    // Initialize account balance
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    // While loop continues as long as balance is greater than 0
    while (balance > 0)
     {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw; // Subtract withdrawal amount

        if (balance > 0) 
              { printf("Remaining balance: %.2f\n\n", balance);} else 
        if (balance == 0) 
              { printf("Balance is now zero. No more withdrawals allowed.\n"); } else 
          {printf("Insufficient funds! Balance is negative (%.2f).\n", balance);}
    }

    printf("\nTransaction ended. Final balance: %.2f\n", balance);

    return 0;
}

