/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program to display the number of occupied and vacant rooms per floor

*/
#include <stdio.h>//preprocessor directive

//main function
int main(){
	
	//array and variables declaration
	int occupancy[5][10];
	int i, j;
	
	//prompt the user to input values
	for(i = 0;i < 5; i++ ) {
		for(j = 0; j < 10; j++) {
			printf("Enter occupancy for floor %d, room %d (1=occupied, 0=vacant): ", i+1, j+1);
			scanf("%d", &occupancy[i][j]);
		}
	}
	
	//calculates and display per floor
	for(i = 0; i < 5; i++) {
		int occupied = 0, vacant = 0;
		for(j = 0; j < 10; j++) {
			if(occupancy[i][j] == 1)
				occupied++;
			else
			{
				vacant++;
			}
			
		}
		
		//display results
		printf("\nThe number of occupied rooms in Floor %d is %d and the Vacant rooms are %d", i+1, occupied, vacant);
	}
	return 0;
	
}


 