#include <stdio.h>
 
void main(){
	int i,j,temp,a[10];

	printf("Enter the elements: \n");	
	for(i = 0; i <=10; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i <= 10; i++){
		for(j = i+1; j <=10; j++){
			if(a[i] > a[j]){
				temp = a[i];
				while(j != i){
					a[j] = a[j-1];
					j --;
					a[i] = temp;
				}
			}
		}
	}

	printf("the sorting array is : \n");
	for (i = 0; i <= 10; i++)
	{
		printf("%d \n", a[i]);
	}
}