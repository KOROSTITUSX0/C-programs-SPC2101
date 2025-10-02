/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program to compute water bill according to the units consumed. 

*/

#include<stdio.h>  //pre-processor directive
//main
int main()
{
	//variable declaration
	float units_consumed,total_water_bill;
	
	//Prompt the user to input the number of water units consumed
	printf("Enter the number of units consumed: ");
	scanf("%f", &units_consumed);
	
	
	//water bill calculation
	if (units_consumed > 60.00){
		total_water_bill = units_consumed * 30;
		printf("Total water bill: %.2f KES \n",total_water_bill);
	} else if(units_consumed > 30.00) {
		total_water_bill = units_consumed * 25;
		printf("Total water bill: %.2f KES \n",total_water_bill);
	} else {
		total_water_bill = units_consumed * 20;
		printf("Total water bill: %.2f KES \n",total_water_bill);
		
	}
	
	return 0 ;
	
	
}