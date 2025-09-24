/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program to prompt the user to enter height,ID Number,Bank balance
			and Age 

*/

#include<stdio.h> //scanf(),printf()
//main function
int main(){
	//variable declaration
	int IDNumber;
	float Height;
	double BankBalance;
	int Age;
	
	//prompting the user to enter their data
	printf("Please enter your ID Number:");
	scanf("%d",&IDNumber);
	
	printf("Please enter your Height(cm):");
	scanf("%f",&Height);
	
	printf("Please enter your Bank Balance(in Ksh):");
	scanf("%lf",&BankBalance);
	
	printf("Please enter your Age:");
	scanf("%d",&Age);
	
	printf("\n\n");//to leave a blank line before displaying to the user screen
	//Display to the user screen
	printf("Your ID Number is %d \n",IDNumber);
	printf("Your Height is %.2f cm \n",Height);
	printf("Your Bank Balance is Ksh.%.2lf \n",BankBalance);
	printf("Your Age is %d years\n",Age);
	
	return 0;//Execution succesful
}