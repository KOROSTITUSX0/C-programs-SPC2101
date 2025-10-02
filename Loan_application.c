/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program to determine if a user qualify for a loan when they meet
			certain requirements required by the bank  

*/

#include<stdio.h>  //pre-processor directive
//main
int main(){
	//variable declaration
    int age, income;
    
    //prompting the user to input values
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your annual income in Ksh: ");
    scanf("%d", &income);
    
    
    if(age >= 21 && income >= 21000) 
        printf("\nCongratulations you qualify for a loan. \n");
    else 
        printf("\nUnfortunately, we are unable to offer you a loan at this time .\n");
    
	return 0;

} 
