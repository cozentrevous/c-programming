/*
 A local library wants to keep track of the titles of books borrowed each day. Write a C
program that allows the librarian to enter book titles and store each title in a text file
named borrowed_books.txt.
i. The program should not delete existing records when a new title is added.
ii. Display a confirmation message once the title is successfully stored.
*/
/*
Name:cozentrevous Agosa
reg no:PA106/G/28712/25
Description:program to keep track of books borrowed in a library
*/
#include <stdio.h>

int main(){
	char book_title[30];
	char choice;
	FILE *fptr;
	
	fptr=fopen("C:\\users\\admin\\borrowed_books.txt","a");
	if(fptr==NULL){
		printf("error in opening file\n");
		return 1;
	}
	
	do{
    printf("Enter the book title to store\n");
    fgets(book_title,sizeof(book_title),stdin);
    fprintf(fptr,"book title is:%s\n",book_title);
	
	printf("title is successfully stored in borrowed_books.txt\n");
	
    printf("would you like to enter another book title(y/n)\n");
    scanf(" %c",&choice);
    getchar();
    
	}while(choice=='y');
	
	if(choice=='n'){
		printf("thank you\n");
	}
	
	fclose(fptr);
	
	return 0;
}