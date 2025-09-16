#include<stdio.h>
int main(){
    int num,size;
    printf("Enter the Size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Value of array :\n");
    for(int i=0; i<size;i++){
    printf("Enter %d Value of array : ",i+1);
    scanf("%d",&num);
    arr[i] = num;
    }
    printf("Entered Value of array :\n");
    for(int i=0; i<size;i++){
    printf("%d ",arr[i]);
    }
        
}
