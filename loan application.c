/*
Name:Cozentrevous Agosa
Reg no:PA106/G/28712/25
Description:program to collect user details before giving a loan
*/

#include<stdio.h>//pre-processor directive scanf(),printf()

//main function
int main(){
	
	int age;
	float annual_income;
	
	printf("Enter your age \n");
	scanf("%d",&age);
	
	printf("Enter your annual_income\n");
	scanf("%f",&annual_income);
	
	printf("you entered:%d years with an annual_income of ksh %.2f ",age,annual_income);
	
	if(age>=21&&annual_income>=21000){
	printf("congratulations,you qualify for a loan\n");
	}
     else{
     printf("unfortunately,we are unable to offer you a loan at this time\n");
	 }
     return 0;
}