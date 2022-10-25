#include <stdio.h>

struct Node {
	int coeff;
	int pow;
	struct Node *next;

}

void create_node(int x, int y, struct Node **temp){
	struct Node *r,*z;
	z = *temp;
	if(z==NUll){
		r=(struct Node*)malloc(sizeof(strcut Node));
		r->coeff =x;
		r->pow = y;
		*temp = r;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r= r->next;
		r->next = NULL;
	}
	else {
		r->coeff = x;
		r->pow = y;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r= r->next;
		r->next = NUll;
	}
}