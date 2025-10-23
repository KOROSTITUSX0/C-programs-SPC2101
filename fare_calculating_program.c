/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A C function to be used to calculate the fare according to the distance travelled in kilometers. 
   
*/

#include <stdio.h> //preprocessor directive

//function prototype
float calculateFare(float distance_travelled);

//main function
int main()
{	
	//variable declaration
	float distance,total_fee;
	
	//prompt the user to input values
	printf("Please enter the distance travelled (in kilometers):");
	scanf("%f",&distance);
	
	//function calling
	total_fee = calculateFare(distance);
	printf("The total fare is Ksh.%.2f",total_fee);
	return 0;
}

//function declaration
float calculateFare(float distance_travelled)
{
	float total_fare;
	
	total_fare = distance_travelled * 50;
	return(total_fare);
}