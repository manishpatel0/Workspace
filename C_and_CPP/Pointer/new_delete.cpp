#include <iostream>
using namespace std;

int main(){
	int a = 10;	//stored in stack

	int *p = new int();	//allocate memory in heap
	*p = 10;

	delete(p);	//deallocate memory
	p = new int[4];
	delete[]p;
	p = NULL;
	return 0;
}
