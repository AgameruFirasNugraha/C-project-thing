//==========================
//=== MINI ATM SIMULATOR ===
//==========================

#include <stdio.h>

int main() {
    // 1. Starting Balance Account
    float balance = 1000.00;
    int choice;
    float amount;

    do {
        // 2. Display Menu

        printf("\n=== MINI ATM MENU ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("choose an option (1-4): ");
        scanf("%d", &choice);

        // 2. Handling the users choice

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                // add amount to balance
                balance = balance + amount;
                printf("Successfully deposited $%.2f!\n", amount);
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                // Check if users had enough money to withdraw
                if (amount <= balance) {
                    balance = balance - amount;
                    printf("Please take your cash: $%.2f\n", amount);
                } else {
                    printf("Error: insufficient funds!\n");
                }
                break;

            case 4:
                printf("Thank you for using Mini ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid option! Please try again.\n");

        }

        // keep looping while choice is not equal to 4  (!= 4)
    } while (choice != 4);

    return 0;

}