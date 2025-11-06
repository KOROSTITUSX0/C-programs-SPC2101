/*
NAME : KOROS TITUS KIPRONO
REG NO : PA106/G/28710/25
DESCRIPTION :A program that allows the librarian to enter book titles and store
 each title in a text file named borrowed_books.txt.

*/
#include <stdio.h>//preprocessor directive,fclose(),fopen()
#include <string.h>

//main function
int main(){
	
	FILE *flib;
	flib = fopen("borrowed_books.txt","a");
	
	if(flib == NULL){
		printf("Error opening the file!\n");
		return 1;
	}
	
	char title[100];//stores file contents
	char choice;
	
	do{
		printf("Enter the book title: ");
		fgets(title,sizeof(title),stdin);
		title[strcspn(title, "\n")] = 0; //remove newline
		
		fprintf(flib,"%s\n",title);
		printf("Book title '%s' successfully stored!\n", title);
		printf("Add another book? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Clear input buffer
        
    } while (choice == 'y' || choice == 'Y');
	
	
	fclose(flib);
	return 0;
}