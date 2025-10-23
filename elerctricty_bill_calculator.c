/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A C function to be used to calculate the electricity bill.  

*/


#include <stdio.h>//pre-processor directive

//function prototype
float calculateElectricBill(int number_of_units);

// main function
int main() {
    int number_of_units;
	float bill;
    
    printf("Enter number of units consumed: ");
    scanf("%d", &number_of_units);
    
    //function calling
    bill = calculateElectricBill(number_of_units);
    printf("Total bill is KSh. %.2f\n",bill);
    
    return 0;
}

//function declaration
float calculateElectricBill(int number_of_units) {
    float totalBill = 0.0;
    
    if (number_of_units <= 100) {
        totalBill = number_of_units * 10;
    }
    else if (number_of_units <= 200) {
        totalBill = (100 * 10) + ((number_of_units - 100) * 15);
    }
    else {
        totalBill = (100 * 10) + (100 * 15) + ((number_of_units - 200) * 20);
    }
    
    return totalBill;
}