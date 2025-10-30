/*
Name:cozentrevous Agosa
reg no:PA106/G/28712/25
Description:1D array to store daily revenues of a hotel
*/

#include <stdio.h>

int main(){
	int revenue[7];
	int i;
	int total=0;
	float average;
	
	printf("Enter the revenue for each day\n");
	
	for(i=0;i<7;i++){
		printf("day %d\n",i+1);
		scanf("%d",&revenue[1]);
		total += revenue[1];
	}
	
	printf("the total is kes %d\n",total);
	
	average=total/7;
	printf("the average is %.2f\n",average);
	
	return 0;
}