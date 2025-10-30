/*
Name:Cozentrevous Agosa
Reg no:PA106/G/28712/25
Description:2D array to display occupancy
*/
#include <stdio.h>

int main(){
	int occupancy[5][10];
	int F,R;//Floor and Room
	int occupied,vacant;
	
	for(F=0;F<5;F++){
		occupied=0;
		vacant=0;
		
		printf("input occupancy of floor %d(occupied=1,vacant=0)\n",F+1);
		
		for(R=0;R<10;R++){
			do{
			printf("room %d =",R+1);
			scanf("%d",&occupancy[F][R]);
			
			if(occupancy[F][R]!=0&&occupancy[F][R]!=1)
				printf("invalid option,please re-enter\n");
				}while(occupancy[F][R]!=0&&occupancy[F][R]!=1);
			
			if(occupancy[F][R]==1)
				occupied++;
			else 
				vacant++;
			
		}
	
	printf("floor %d -> %d occupied and %d vacant\n",F+1,occupied,vacant);
	}
	return 0;
}