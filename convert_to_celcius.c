/*
Name:Cozentrevous Agosa
reg no:PA 106/G/28712/25
Description:program to converts temperature in fahrenheits to celcius
*/
#include <stdio.h>

void converttocelcius(void){
	float F,C;
	
	printf("Enter temperature in fahrenheits\n");
	scanf("%f",&F);
	
	C=(F-32)*5/9;
	printf("temperature in celcius is= %.3f\n",C);
	
}

int main(){
	converttocelcius();
	
	return 0;
}