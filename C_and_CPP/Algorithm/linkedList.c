#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false -1

int size = 0;
struct Node
{
	int data;
	struct Node *next;
};

struct Node *newNode(int data){
	struct Node *node = (struct Node*) malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;
	return (node);
}

void travalios(struct Node *ptr){
	size = 0;
	while(ptr != NULL){
		printf("%d ",ptr->data);
		ptr = ptr->next;
		size +=1;
	}
	printf(" ");
}

struct Node *insetFirst(struct Node *head, int value){
		struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
		ptr->data = value;
		ptr->next = head;
		head = ptr;
		return head;
}

// struct Node *insetBetween(int value){
// 	struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
// 	ptr->data = value;
// 	ptr->next = second->next;
// 	second->next = ptr;
// 	return ptr;

// }

int isEmpty(struct Node *head){
	return (head == NULL) || (head->next == NULL) ? true : false;
}


int main(){
	 struct Node *head = (struct Node*) malloc(sizeof(struct Node));
	 struct Node *second = (struct Node*) malloc(sizeof(struct Node));
	 struct Node *third = (struct Node*) malloc(sizeof(struct Node));
	 struct Node *four = (struct Node*) malloc(sizeof(struct Node));
	 struct Node *five = newNode(33);

	 head->data = 7;
	 head->next = second;

	 second->data = 11;
	 second->next = third;

	 third->data = 32;
	 third->next = four;

	 four->data = 18;
	 four->next = five;
	 printf("Linked list data\n");
	 travalios(head);

	 printf("\nLinked list insetFirst\n");
	 head = insetFirst(head ,5);
	 travalios(head);
	 printf("Empty: %d ", isEmpty(head));

	 // printf("\nLinked list inset b/w\n");
	 // struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	 // ptr->data = 55;
	 // ptr->next = second->next;
	 // second->next = ptr;
	 // insetBetween(55);
	 // travalios(head);

	 printf("\nLinked list insetEnd\n");
	 struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
	 ptr->data = 99;
	 while(head != NULL){
	 	if(head == NULL)
	 		head = head->next;

	 }

	 travalios(head);
	 printf("\nSize : %d ", size);


	 
	return 0;
}