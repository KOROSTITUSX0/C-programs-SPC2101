/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A bank ATM withdrawal program 

*/
#include <stdio.h>//preprocessor directive

int main() {
	//variable declaration
    float balance, withdrawal;
    
    // Get initial balance from user
    printf("Enter your account balance: Ksh.");
    scanf("%f", &balance);
    
    printf("\nATM Withdrawal System\n");
    printf("Initial balance: Ksh.%.2f\n\n", balance);
    
    // While loop for withdrawals
    while (balance > 0) {
        printf("Enter amount to withdraw: Ksh.");
        scanf("%f", &withdrawal);
        
        // Check if withdrawal is valid
        if (withdrawal <= balance) {
            balance = balance - withdrawal;
            printf("Withdrawal successful. New balance: Ksh.%.2f\n\n", balance);
        } else {
            printf("Insufficient funds! You can withdraw up to Ksh.%.2f\n\n", balance);
        }
        
        // If balance becomes zero or negative, break the loop
        if (balance <= 0) {
            printf("Account balance is Ksh.%.2f. No more withdrawals.\n", balance);
            break;
        }
    }
    
    printf("Thank you for using ATM.Welcome again\n");
    
    return 0;

}
