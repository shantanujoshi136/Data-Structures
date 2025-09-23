#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    
	int arr[size],i,el,j;
	printf("Enter the array elements: \n");
	
	for(i=0;i<size;i++){
		printf("Enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the Element you want to Search: ");
	scanf("%d",&el);
	
	int left = 0,right = size-1;
	
	for(j = 0;j<size;j++){
		int mid = (left+right)/2;
		if(el == arr[mid]){
			printf("Element %d is found at position: %d",arr[mid],j+1);
		}
		else if(el<arr[mid]){
			left = mid -1;
		}
		else {
			right = mid +1;
		}
	}
}
