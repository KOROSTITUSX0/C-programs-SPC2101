/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program to compute compound interest 

amount = principal * pow(1+rate/compounded_time,compounded_time*time);
compound_interest = amount - principal;
*/

#include<stdio.h> //printf(),scanF()

//main
int main() {
	float principal,compound_interest,rate,time,amount;
	int compounded_time;
	
	//prompting the user to input values
	printf("Please enter your Principal amount: Ksh.");
	scanf("%f",&principal);
	
	printf("Enter your annual interest rate(%%): ");
	scanf("%f",&rate);
	
	printf("Enter time in years: ");
	scanf("%f",&time);
	 
	printf("Enter compounded time per year: ");
	scanf("%d",&compounded_time);
	
	//convert percentage to decimal
	rate = rate/100;
	
	//calculate compound interest
	amount = principal * pow(1+rate/compounded_time,compounded_time*time);
	compound_interest = amount - principal;
	
	//Display results
	printf("\nYour Compound interest is %.2f\n",compound_interest);
	
	return 0;//Execution successful
	
}