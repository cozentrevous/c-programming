/*
Name:Cozentrevous Agosa
reg no:PA106/G/28712/25
description:program to loop until a correct oassword is entered
*/
#include<stdio.h>//preproccesor directive scanf()printf()

//main function
int main(){
	int password;
	int correct_password=1234;
	
	do{
	printf("enter the password\n");
	scanf("%d",&password);
	
	if(password!=correct_password){
		printf("incorrect password,try again\n");
	}
	}while( password!=correct_password);
	
	printf("access granted\n");
	
	return 0;
}