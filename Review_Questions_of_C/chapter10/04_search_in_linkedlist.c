#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

int searchInList(struct Node* head, int val){
	while(head != NULL){
		if(head->data == val)
			return 1;
		head = head->next;
	}
	return 0;
}

int main(){
	struct Node* head = NULL;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	head->data=1;
        head->next = (struct Node*)malloc(sizeof(struct Node));
        head->next->data=2;
        head->next->next = (struct Node*)malloc(sizeof(struct Node));
        head->next->next->data=3;
        head->next->next->next=NULL;
	
	int val = 2;
	if(searchInList(head, val))
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
