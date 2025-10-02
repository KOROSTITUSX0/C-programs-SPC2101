/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program to check if a student is eligible for final exams. 

*/

#include<stdio.h>  //pre-processor directive
//main
int main()
{
	//variable declaration
	float attendance_percentage, average_marks;
	
	//Prompt the user to input attendance percentage
	printf("Enter the attendance (in %%): ");
	scanf("%f", &attendance_percentage);
	
	//prompt the user to input average marks
	printf("Enter the average marks : ");
	scanf("%f", &average_marks);
	
	//Check eligibility
	if (attendance_percentage >= 75.0 && average_marks >= 40.0){
		printf("\nEligible for final exams. \n");
	} else {
		printf("\nNot eligible. \n");
	}
	
	return 0 ;
	
	
}