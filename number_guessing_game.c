/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A  program that implements a number guessing game. 

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    //variable declaration
    int secret_number;     
    int user_guess;        
    int guess_count = 0;   
    
    //make numbers random
    srand(time(NULL));
    
    // Generate a random number between 1 and 20(inclusive)
    // rand() % 20 gives 0-19, so we add 1 to get 1-20
    secret_number = (rand() % 20) + 1;
    
     
    printf("Guess any number between 1 and 20.\n");
     
    do {
        printf("Enter the your guess number: ");
        
        // let the user  input values
      	scanf("%d", &user_guess);
        // Counts the number of attempts
        guess_count++;  
        
        // Check if the guess is too high, too low, or just right
        if (user_guess > secret_number) {
            printf("Too high!\n");
        } 
        else if (user_guess < secret_number) {
            printf("Too low!\n");
        } 
        else {
             
            printf("\n CONGRATULATIONS! \n");
                printf("Total number of attempts is  %d \n", guess_count);
            }
        }
        
     
     while (user_guess != secret_number);  // programs runs until they guess right
    
    printf("Game over\n");
    
    return 0;  // execution successful
}