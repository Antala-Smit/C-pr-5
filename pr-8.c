//8. Write C program matrix convert into transpose matrix.

#include<stdio.h>

void main(){
	int a[50][50],row,col,i,j;
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
	
	printf("\n Original Matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n transpose matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",b[i][j] = a[j][i]);
		}
		printf("\n");
	}
}
