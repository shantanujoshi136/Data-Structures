#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5};
    int ind,val;
    printf("Enter the position : ");
    scanf("%d",&ind);
     printf("Enter the value : ");
    scanf("%d",&val);
    for(int i=5;i>=ind;i--){
        arr[i]= arr[i-1];
    }
    arr[ind-1]=val;
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
  }
