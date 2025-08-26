#include<stdio.h>
int main(){
	int num,i,sum= 0;
	printf("Enter the number(Natural): ");
	scanf("%d",&num);
	for(i = 1;i<=num;i++){
		sum+=i;
	}
	printf("The Sum will be: %d",sum);
}
