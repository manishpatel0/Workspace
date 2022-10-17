//Dyamical array
#include <iostream>
using namespace std;

int main(){

	// int myArray[5];
	int size;
	cout << "Size: ";
	cin >> size;
	// my create array dynamicl array 
	int *myArray= new int[size];

// 
	for (int i = 0; i < size; i++)
	{
		 cout << "Array[" << i << "] " ;
		 cin >> myArray[i];
	}

	for (int i = 0; i < size; i++)
	{
		// cout << myArray[i] << " " ;
		cout << *(myArray + i) << " " ;
	}
// delete array
	delete[]myArray;
	myArray = NULL;


	return 0;
}