/*
Name:cozaentrevous agosa
reg no:PA106/G/28712/25
Description:program to calculate electric bill
*/
#include <stdio.h>

void calculateelectricbill(void){
	float units;
	
	printf("Enter the units consumed\n");
	scanf("%f",&units);
	
	if(units<=100){
		printf("total bill= %.2f\n",units*10);
	}
	
	else if(units<=200){
		printf("total bill= %.2f\n",(100*10)+(units-100)*15);
	}
	
	else{
		printf("total bill= %.2f\n",(100*10)+(100*15)+(units-200)*20);
	}
}

int main (){
	calculateelectricbill();
	
	return 0;
}