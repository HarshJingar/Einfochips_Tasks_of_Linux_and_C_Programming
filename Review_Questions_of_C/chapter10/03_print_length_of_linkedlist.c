#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

int lengthOfList(struct Node* head){
	int cnt=0;
	while(head != NULL){
		cnt++;
		head=head->next;
	}
	return cnt;
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
	printf("Length of Linkedlist is: %d\n" ,lengthOfList(head));
	return 0;
}
