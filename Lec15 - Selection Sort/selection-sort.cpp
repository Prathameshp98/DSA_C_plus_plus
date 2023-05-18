#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int size) {

  for(size_t i=0; i< size-1; i++){
    int min_index = i;
    
    for(size_t j=i+1; j<size; j++){
      if(arr[j] < arr[min_index])
        min_index = j;
    }

    if(min_index != i)
      swap(&arr[min_index], &arr[i]);
    
  }

  for(size_t i=0; i<size; i++){
      cout << arr[i] << " "; 
  }
  
}


int main() { 

  int arr[] {12, 2, 34, 0, 56, 67, 101, -3, 8};
  int size = (sizeof(arr)/sizeof(int));

  selectionSort(arr, size);
    

    return 0;
}