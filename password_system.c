/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A password system requires the user to enter the correct password "1234" to log in.  

*/
#include <stdio.h>
#include <string.h>

int main() {
     //variable declaration
    char user_input[20];  
    char correct_password[] = "1234";   
    
 	//get the user input
    printf("Please enter the password to continue:\n");
    
    
    do {
        printf("Password: ");
        
       
        fgets(user_input, sizeof(user_input), stdin);
        
        // Remove the newline character that fgets includes
        if (user_input[strlen(user_input) - 1] == '\n') {
            user_input[strlen(user_input) - 1] = '\0';
        }
        
        
        
        // Checks if they got it wrong
        if (strcmp(user_input, correct_password) != 0) {
            printf("Incorrect password. Please try again.\n");
            
        }
        
    } while (strcmp(user_input, correct_password) != 0);  // program runs looping until password matches
    
    // when they entered the correct password access is granted
    printf("ACCESS GRANTED!\n");
     
    return 0;
}