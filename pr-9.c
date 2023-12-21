//9. Write C program to find sum of diagonal elements of a matrix.

#include<stdio.h>

void main(){
	int a[50][50],row,col,i,j,sum=0;
	int b[50][50];
	
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
	
	printf("\n printf of matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i==j){
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
		}	
	}printf("\n Total array :- %d\n",sum);
}
