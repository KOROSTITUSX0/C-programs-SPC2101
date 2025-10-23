/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A C function that takes temperature in Fahrenheit as input and returns the
temperature in Celsius.  

*/

#include <stdio.h>//pre-processor directive

// function prototype
float convertToCelsius(float fahrenheit);


//main function
int main() {
	
	//variable declaration
    float fahrenheit,celsius ;
    
    //prompts the user to input values
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    //function calling
    celsius = convertToCelsius(fahrenheit);
    printf("The temprature equivalence is %.1f°C\n",celsius);
    
    return 0;
}

//function declaration
float convertToCelsius(float fahrenheit) {
	float celsius;
	
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;

}
    