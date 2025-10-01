/*
Name:Cozentrevous Agosa
reg no:PA106/G/28712/25
description:program to illustrate eligibility to sit for final exams
*/
#include<stdio.h>//preprocessor directive printf(),scanf()

//main function
int main(){
	int attendance_percentage,average_marks;
	
	printf("enter your attendance_percentage\n");
	scanf("%d",&attendance_percentage);
	
	printf("enter your average_marks\n");
	scanf("%d",&average_marks);
	
	printf("your attendance_percentage is %d%% and average_marks %d\n",attendance_percentage,average_marks);
	
	if (attendance_percentage>=75&&average_marks>=40){
		printf("you are eligible to sit for the final exam");
	}
	else {
		printf("you are not eligible to sit for the final exam");
	}
	
    return 0;
}
