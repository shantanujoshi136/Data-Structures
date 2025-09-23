#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
	int arr[size],a,i,pos,j;
	printf("Enter the aray elements: ");
	for(i=0;i<size;i++){
		printf("Enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the position you want to delete: ");
	scanf("%d",&pos);
	
	for( j = pos-1;j<size;j++){
		arr[j] = arr[j+1];
	}
	size--;
	printf("Updated array is : \n");
	for(i = 0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
