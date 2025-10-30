/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION : A program to calculate the total weekly revenue and compute the average from it and
			 display the results.

*/
#include <stdio.h>//preprocessor directive

//main function
int main() {
	
	//declare and initialize array
	float revenue[7];
	float average, total = 0;
	int i;
	
	//prompt the user to input values 
	for(i = 0; i < 7; ++i) {
		printf("Enter revenue for day %d: ", i + 1);
		scanf("%f", &revenue[i]);
		total += revenue[i];
	}
	
	//computes the avarage daily revenue 
	average = total / 7;
	
	//display results
	printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);
    
    return 0;
		
}
