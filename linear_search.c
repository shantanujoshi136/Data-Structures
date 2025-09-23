#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    
	int arr[size],a,i,el,j,fb;
	printf("Enter the array elements: \n");
	
	for(i=0;i<size;i++){
		printf("Enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the Element you want to Search: ");
	scanf("%d",&el);
	for(i = 0;i<size;i++){
		if(arr[i]==el){
			printf("Element %d is find out at position: %d",el,i+1);
			break;
		}
		else fb = 0;
	}
	if(fb == 0)
	printf("Element not found!");
}
