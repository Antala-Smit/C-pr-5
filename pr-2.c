//2. Write C program to print array in reverse order.
#include<stdio.h>

void main(){
	int a[50],i,no;
	
	printf("Enter array :-");
	scanf("%d",&no);
	
	for(i=0;i<no;i++){
		printf("a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nPrint array in reverse order\n");
	for(i=no-1;i>=0;i--){
			printf("a[%d] = %d\n",i,a[i]);
	}
}
