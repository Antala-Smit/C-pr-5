//1. Write C program to print all negative elements in an array.
#include<stdio.h>

void main(){
	int a[50],i,no;
	
	printf("Enter array :-");
	scanf("%d",&no);
	
	for(i=0;i<no;i++){
		printf("a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nNegative array\n");
	for(i=0;i<no;i++){
		if(a[i]<0){
			printf("a[%d] = %d\n",i,a[i]);
		}
	}
}
