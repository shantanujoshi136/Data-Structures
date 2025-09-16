#include<stdio.h>
int swp(int a , int b){
int t;
t=a;
a=b;
b=t;
printf("Value after swap");
printf("\na: %d\nb: %d",a,b);
}
void main()
{
 	 int a,b;
	 printf("Enter two value : ");
	 scanf("%d %d",&a,&b);
	 swp(a,b);
}
