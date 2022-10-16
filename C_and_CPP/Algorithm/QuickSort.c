#include <stdio.h>

void QuickSort(){

}


int main(){

	int arr[] = {2, 4, 3, 9, 1, 4, 8, 7, 5, 6};


	int size = sizeof(arr)/sizeof(arr[0]);
	int arr1[size-1];
	printf("Size:%d\n",size);

	for(int i = 0 ; i <= size-1; i++){
		int temp;
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
		printf("%d ",arr[i]);

	}






	return 0;
}