/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program that uses a for loop to print all the numbers from 100 down to 50 in descending order. 

*/
#include <stdio.h> //preprocessor directive

//main function
int main() {
	 //variable declaration
	int i;   
	 
	 // For loop to print numbers from 100 down to 50
    for (i = 100; i >= 50; i--) {
        printf("%d\n", i);
     
    }
    
    return 0;
}