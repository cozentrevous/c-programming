/*
Name:Cozentrevous Agosa
reg no:PA106/G/28712/25
Description:program to didplay data bundles options and purchases
*/
#include<stdio.h>//preprocessor directive printf(), scanf()

//main function
int main(){
	int choice;
	
	printf("1: 100MB @ 50 KES\n");
	printf("2: 500MB @ 200KES\n");
	printf("3: 1GB @ 350KES\n");
	printf("4: 2GB @ 600KES\n");
	
	printf("Enter your choice of bundle\n");
	scanf("%d",&choice);
	
	if (choice==1){
		printf("you selected 100MB for 50KES\n");
	}
	
	else if(choice==2){
		printf("you selected 500MB for 200KES\n");
	}
	
	else if(choice==3){
		printf("you selected 1GB for 350KES\n");
	}
	
	else if(choice==4){
		printf("you selected 2GB for 600KES\n");
	}
	
	else{
		printf("invalid choice\n");
	}
		
		return 0;
	}