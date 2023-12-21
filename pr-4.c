//4. Write C program to find minimum and maximum element in array

#include<stdio.h>

void main(){
	int a[50],i,no,max,min;
	
	printf("Enter array :-");
	scanf("%d",&no);
	
	for(i=0;i<no;i++){
		printf("a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	
	printf("\nminimum and maximum element in array\n");
	for(i=0;i<no;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
}
