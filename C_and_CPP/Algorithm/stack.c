#include <stdio.h>

int MAXSIZE = 8;
int stack[8], data;
int top = -1;

int isempty() {
	if(top == -1)
		return 1;
	else
		return 0;
}

int isfull(){
	if(top == MAXSIZE)
		return 1;
	 else 
	 	return 0;

}

int peek() {
	return stack[top];

}

int pop() {
	if(!isempty){
		data = stack[top];
		top -=1;
		return data;

	} else {
		printf("Could not retrieve data, stack is isempty.\n");
	}

}

int push(int data){
	if (!isfull	)
	{
		top +=1;
		stack[top] = data;

	} else {
		printf("Could not insert data, stack is full.\n");
	}
}

int main(){

	push(3);
	push(5);
	push(9);
	push(1);
	push(12);
	push(15);

	printf("Element at top of te stack: %d \n", peek());
	printf("Element : \n");

	// stack data
	while(!isempty()){
		int data = pop();
		printf("%d \n", data);

	}

	printf("stack full : %s \n", isfull()?"true":"false ");
	printf("stack isempty : %s \n", isempty()?"true":"false ");


}












