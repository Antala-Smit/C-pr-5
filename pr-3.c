//3. Write C program to find sum of all elements of array.

#include<stdio.h>

void main(){
	int a[50],i,no,sum=0;
	
	printf("Enter array :-");
	scanf("%d",&no);
	
	for(i=0;i<no;i++){
		printf("a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nSum of all elements of array\n");
	for(i=0;i<no;i++){
			printf("a[%d] = %d\n",i,a[i]);
			sum=sum+a[i];
	}
	printf("Total Array :-%d",sum);
}
