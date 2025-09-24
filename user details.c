/*
Name:Cozentrevous Agosa
reg no:PA106/G/28712/25
description:simple program to prompt user to enter details
*/
#include<stdio.h>//preprocessor directive scanf(),printf()

//main function:
int main() {
	float height;
	int ID_number;
	int bank_account_balance;
	
	printf("Enter your height\n");
	scanf("%f",&height);
	printf("your height is %.2f metres\n",height);
	
	printf("Enter your ID_number \n" );
	scanf("%d",&ID_number);
	printf("your ID_number is %d\n",ID_number);
	
	printf("Enter your bank_account_balance\n");
	scanf("%d",&bank_account_balance);
	printf("your bank_account_balance is ksh %d",bank_account_balance);
	
	return 0;
}