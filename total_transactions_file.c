/*A small retail shop stores daily sales transactions in a file named sales.txt. Each line
contains the amount of a single transaction. Write a C program that:
i. Reads all transactions from the file.
ii. Calculates and displays the total sales for the day.
iii. Ensures the file is properly closed after reading*/
/*
Name:cozentrevous Agosa
reg no:PA106/G/28712/25
Description:program to reads transaction from a file and does calculation
*/
#include <stdio.h>

int main(){
	FILE *fptr;
	int i,transaction;
	int sum=0,amount;
	
	fptr=fopen("sales.txt","w");
	if(fptr==NULL){
		printf("error opening file for writing");
		return 1;
	}
	
	printf("Enter the total number of transactions made today\n ");
	scanf("%d",&transaction);
	getchar();
	
	printf("enter amount of each transaction \n");
	
	for(i=0;i<transaction;i++){
		printf("transaction %d: KES=",i+1);
		scanf("%d",&amount);
		fprintf(fptr," %d\n",amount);
	}
	fclose(fptr);
	
	printf("transactions successfully stored in sales.txt\n");
	
	fptr=fopen("sales.txt","r");
	if(fptr==NULL){
		printf("error opening file reading\n");
		return 1;
		
	}
	
	sum=0;
	while(fscanf(fptr,"%d",&amount)==1){
	sum+=amount;
	}
	
	fclose(fptr);
	
	printf("the total transactions amount for today is:KES %d",sum);
	
	return 0;
}