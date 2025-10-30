/*
Name:Cozentrevous Agosa
Reg no:PA106/G/28712/25
Description:3D array to calculate occupied rooms across branches
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int occupancy[3][5][10];
	int B,F,R;//Branch, Floor and Room
	int occupied;
	int total=0;
	
	for (B=0;B<3;B++){
		printf("branch %d:\n",B+1);
		
	for(F=0;F<5;F++){
		occupied=0;
		
		printf("\n");
		
		for(R=0;R<10;R++){
			occupancy[B][F][R]=rand() %2;
			
			if(occupancy[B][F][R]==1)
				occupied++;
			
		}
	
	printf("floor %d >> %d occupied and %d vacant\n",F+1,occupied,10-occupied);
	printf("\n");
	
	total+=occupied;
	}
	}
	
	printf("\n");
	printf("the total number of occupied rooms= %d\n",total);
	return 0;
}