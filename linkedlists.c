#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<S_linkist_J.h>
struct StringNode{
	char str[10];
	struct StringNode*next;
};
struct StringNode*screate(char s[10]){
	int i;
	struct StringNode*newNode = (struct StringNode*)malloc(sizeof(struct StringNode*));
	for(i = 0;i<strlen(s);i++){
		newNode->str[i] = s[i];
	}
	newNode->next = NULL;
	return newNode;
}
void shows(struct StringNode*head){
	struct StringNode*temp = head;
	while(temp!=NULL){
		printf("%s -> ",temp->str);
		temp = temp->next;
	}
	printf("NULL");
}
int main(){
	struct StringNode*head = screate("Shantanu");
	struct StringNode*second = screate("Samarth");
	struct StringNode*third = screate("Shivang");
	head->next = second;
	second->next = third;
	shows(head);
	
}
