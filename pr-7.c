//7. Write a c program to check whether two matrices are equal or not.

#include<stdio.h>

void main(){
	int a[50][50],row,col,i,j,equal=1;
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
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j] != b[i][j]){
				equal=0;
			}
		}
	}
	if(equal == 1){
		printf("\n Both matrices are equal ");
	}else{
		printf("\n Both matrices are not equal");
	}
}
