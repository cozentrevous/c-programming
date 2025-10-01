/*
Name:Cozentrevous Agosa
reg no:PA106/G/28712/25
description:program to perform water bill calculations
*/
#include<stdio.h>//preprocessor directive printf(),scanf()

//main funtion
int main(){
	float units,water_bill;
	
	printf("Enter the units used\n");
	scanf("%f",&units);
	
	if (units<=30){
		water_bill=units*20;
	}
	else if(units<=60){
		water_bill=units*25;
	}
	else {
		water_bill=units*30;
	}
	 printf("total water bill:%.2f KES\n",water_bill);
	 
	 return 0;
}