/*
name:cozentrevous agosa
reg no:PA 106/G/28712/25
Description:program to calculate fare of travelling
*/

#include <stdio.h>

void calculatefare(void){
	float distance,total_fare;
	
	printf("enter the distance travelled in kilometeres\n");
	scanf("%f",&distance);
	
	total_fare=50*distance;
	printf("your total_fare is= KES %.2f\n",total_fare);
	
}

int main(){
	calculatefare();
	
	return 0;
}