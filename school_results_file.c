/*
Name:cozentrevous Agosa
reg no:PA106/G/28712/25
Program to store total marks for students and display it.
*/

#include <stdio.h>

int main(){
	FILE *fptr;
    char name[20];
	char reg_no[20];
	int marks;
	int i,j;//j for number of students
	
	fptr=fopen("results.dat","wb");
	if(fptr==NULL){
     return 1;
	}
	
	printf("enter number of students you want to store results for:\n");
	scanf("%d",&j);
	getchar();
	
	for(i=0;i<j;i++){
	
    printf("enter name\n");
    fgets(name,sizeof(name),stdin);
    fwrite(&name,sizeof(name),1,fptr);
    
    printf("enter registration number\n");
    fgets(reg_no,sizeof(reg_no),stdin);
    fwrite(&reg_no,sizeof(reg_no),1,fptr);
    
    printf("enter total marks\n");
    scanf("%d",&marks);
    getchar();
    fwrite(&marks,sizeof(marks),1,fptr);
    
	}
	
	fclose(fptr);
	
	printf("student records successfully written to results.bat\n");
	
	printf("\n");
	
	fptr=fopen("results.dat","rb");
	if(fptr==NULL){
		return 1;
	}
	
	for(i=0;i<j;i++){
	    fread(&name,sizeof(name),1,fptr);
	    fread(&reg_no,sizeof(reg_no),1,fptr);
	    fread(&marks,sizeof(marks),1,fptr);
	    
		printf("Name: %s",name);
		printf("registration number: %s",reg_no);
		printf("Marks: %d\n\n",marks);
	}
	
	return 0;
}