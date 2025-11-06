/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A small retail shop program that Reads alldaily sales transactions stored in 
			a file  named sales.txt, calculates and displays the total sales for the day
             and ensures the file is properly closed after reading.

*/
#include <stdio.h>//preprocessor directive, fclose(), fopen()

//main function
int main(){
	//file opening
	FILE *fshop;
	fshop = fopen("sales.txt", "r");
	
	//error checking
	if (fshop == NULL) {
		printf("Error opening sales.txt file!\n");
		return 1;
	}
	
	//variables for calculation
	float transaction, total = 0;
	int count = 0;
	
	//loop for reading all transactions
	while (fscanf(fshop, "%f", &transaction) != EOF){
		total += transaction;
		count++;
	}
	

	//close the file
	fclose(fshop);
	
	//display results
    printf("Total Sales: $%.2f\n", total);
    
	return 0;//execution successful.
}