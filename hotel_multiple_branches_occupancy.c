/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A to calculate and display the total number of occupied rooms across all three branches of an hotel.

*/

#include <stdio.h>//preprocessor directive

//main function
int main() {
	
	//arrays and variables declaration 
    int chain[3][5][10];
    int i, j, k;
    int total_occupied = 0;
	
	//assigning random accupancy
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            for(k = 0; k < 10; k++) {
                chain[i][j][k] = (i + j + k) % 2; 
                if(chain[i][j][k] == 1) {
                    total_occupied++;
                }
            }
        }
  
    }
	
	//display results
    printf("Total occupied rooms across all branches in the hotel are %d\n", total_occupied);
    return 0;
}