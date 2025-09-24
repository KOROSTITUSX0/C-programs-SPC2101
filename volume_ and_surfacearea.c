/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program to compute surface area and volume of a cylinder
volume = PI * pow(radius,2) * 2
surface_area = 2 * PI * pow(radius, 2) + 2 * PI * radius * height
*/

#include<stdio.h>//scanf(),printf()
//main
int main(){
	//varaible declaration and initialization
	float PI = 3.142;
	double radius,height;
	double surface_area,volume;
	
	//prompt the user to input values
	printf("Enter the radius of the cylinder:");
	scanf("%lf",&radius);
	
	printf("Enter the height of the cylinder:");
	scanf("%lf",&height);
 
	//Calculate the volume
	volume = PI * pow(radius,2) * 2;
	
	//Calculate the surface area
	surface_area = 2 * PI * pow(radius, 2) + 2 * PI * radius * height;
	
	//Display the results of the surface area and volume
	printf("\nVolume: %.2lf cubic units\n", volume);
    printf("Total Surface Area: %.2lf square units\n", surface_area);	
		
	return 0;//Execution succesful		
}

 
