//5. Write C program to find second largest number in array.
#include<stdio.h>

void main(){
	int a[50],i,no,max,min,sl;
	
	printf("Enter array :-");
	scanf("%d",&no);
	
	for(i=0;i<no;i++){
		printf("a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	
	printf("\nsecond largest number in array\n");
	for(i=0;i<no;i++){
		if(a[i]>max){
			sl=max;
			max=a[i];
		}
		else if(a[i]>sl && a[i]<max){
			sl=a[i];
		}
	}
	printf("second largest element = %d\n", sl);
}
