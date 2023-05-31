#include<iostream>

using namespace std;

int partition(int arr[], int s, int e){

  int pivot = arr[s];

  // count elements less than pivot
  int count = 0;
  for(size_t i=s+1; i<=e; i++){
    if(arr[i] <= pivot){
      count++;
    }  
  }

  // place pivot at correct position
  int pivotIndex = s + count;
  swap(arr[pivotIndex], arr[s]);

  // left part elements < pivot and right part elements > pivot
  int i{s}, j{e};

  while(i < pivotIndex && j > pivotIndex){
    while(arr[i] <= pivot){
      i++;
    }

    while(arr[j] > pivot){
      j--;
    }

    if(i < pivotIndex && j > pivotIndex){
      swap(arr[i++], arr[j--]);
    }
  }

  return pivotIndex;
  
}

void quickSort(int *arr, int s, int e){

  if(s >= e){
    return ;
  }

  // creating a partition
  int p = partition(arr, s, e);

  // sorting left part
  quickSort(arr, s, p-1);

  //sorting right part
  quickSort(arr, p+1, e);
  
}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}