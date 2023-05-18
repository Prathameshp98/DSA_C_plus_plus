#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int size) {

  for(size_t i=0; i< size-1; i++){

    for(size_t j=0; j<size-i-1; j++){
      if(arr[j] > arr[j+1])
        swap(&arr[j], &arr[j+1]);
    }
    
  }

  for(size_t i=0; i<size; i++){
      cout << arr[i] << " "; 
  }
  
}


int main() { 

  int arr[] {12, 2, 34, 0, 56, 67, 10, -3, 8};
  int size = (sizeof(arr)/sizeof(int));

  bubbleSort(arr, size);
    

    return 0;
}