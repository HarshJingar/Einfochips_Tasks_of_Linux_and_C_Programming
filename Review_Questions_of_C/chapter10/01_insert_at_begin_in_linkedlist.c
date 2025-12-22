#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* insertAtBegin(struct Node* head, int val){
	struct Node* newNode = (struct Node*) malloc (sizeof(struct Node));
	newNode->data = val;
	newNode->next = head;
	return newNode;
}

void printLinkedlist(struct Node* head){
	while(head){
		printf("%d -> " ,head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int main(){
	struct Node* head = NULL;

	head = insertAtBegin(head,1);
	head = insertAtBegin(head,2);
	head = insertAtBegin(head,5);
	printLinkedlist(head);
	return 0;
}
