/*
Name:Cozentrevous Agosa
Reg noPA106/G/28712/25
description:program to implement a number guessing game
*/
#include<stdio.h>//preproccessor directive scanf(),printf()
#include<stdlib.h>//standard library
#include<time.h>

//main function
int main(){
	int guess,secret_number,attempts=0;
	
	srand(time(0));
	secret_number=rand()%20+1;
	
	do {
		printf("Please enter your guess(1-20)\n");
		scanf("%d",&guess);
		attempts++;
		
		if (guess<secret_number){
			printf("too low\n");
		}
		
		else if(guess>secret_number){
			printf("too high\n");
		}
		
		else{
			printf("congratulations,you guessed the number in %d attempts\n",attempts);
		}
	}while(guess!=secret_number);
	
	return 0;
}