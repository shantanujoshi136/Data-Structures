#include<stdio.h>
int factorial(int n);
int main(){
	int n;
	printf("%d",factorial(n));
}
int factorial(int n){
	
	if(n==0)
	return 1;
	
	else
	return factorial(n-1);
}
