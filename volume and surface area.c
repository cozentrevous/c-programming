/*
Name:Cozentrevous Agosa
Reg no:PA106/G/28712/25
Description:program to find the volume and surface area of a cylinder 
*/
#include<stdio.h>//scanf()printf()

//main function
int main(){
	
	float height,radius,surface_area,volume;
	const float PI=3.142;
	
	printf("Enter height of cylinder\n");
	scanf("%f",&height);
	
	printf("Enter radius of cylinder\n");
	scanf("%f",&radius);
	
	surface_area=2*PI*radius*radius+2*PI*radius*height;
	volume=PI*radius*radius*height;
	
	printf("the volume is %.2f\n",volume);
	printf("the surface_area is %.2f\n",surface_area);
	
	return 0;
}