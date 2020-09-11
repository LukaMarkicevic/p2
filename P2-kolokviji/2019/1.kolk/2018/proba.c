#include <stdio.h>
#define INITAL_CAPACITY 3
	
void push(int *arr, int index, int value, int *size, int *capacity){
     if(*size > *capacity){
          realloc(arr, sizeof(arr) * 2);
          *capacity = sizeof(arr) * 2;
     }
     
     arr[index] = value;
     *size = *size + 1;
}


int main(){
	int size=0;
	int capacity=INITIAL_CAPACITY;
	int* arr = malloc(INITIAL_CAPACITY * sizeof(int));
	return 0;
}