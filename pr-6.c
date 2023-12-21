//6. Write C program to addition of two matrices

#include<stdio.h>

void main(){
	int a[50][50],row,col,i,j;
	int b[50][50];
	
	printf("\nA Matrix \n");
	printf("Enter no of row :- ");
	scanf("%d",&row);
	printf("Enter no of col :- ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] :-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nB Matrix \n");
	printf("Enter no of row :- ");
	scanf("%d",&row);
	printf("Enter no of col :- ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("b[%d][%d] :-",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Sum of two Matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",a[i][j] + b[i][j]);
		}printf("\n");
	}	
}
