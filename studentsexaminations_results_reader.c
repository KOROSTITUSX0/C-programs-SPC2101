/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program that defines a structure to hold the student information,
			reads all student records from the binary file and
			Displays the name and marks of each student on the screen.

*/
#include <stdio.h>//preprocessor directive


//Definition of the structure for student information
struct Student {
    char name[50];
    int Reg_Number;
    float Total_Marks;
};
//main function
int main(){
	//opening the file
	FILE *fstud;
	fstud = fopen("results.dat","rb");
	
	if(fstud == NULL){
		printf("Error opening the file!\n");
		return 1;
	}

    
    struct Student student;  // Using  the structure
    
    printf("Student Examination Results:\n");
    
    
    // Reading of the  entire structure at once.
    while (fread(&student, sizeof(struct Student), 1, fstud) == 1) {
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n", student.Total_Marks);
        printf("-----\n");
    }
    
    //closing of the file
    fclose(fstud);
    return 0;//execution successful
}	
	
	
 