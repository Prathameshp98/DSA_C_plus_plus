#include <iostream>
#include <queue>

using namespace std;

bool binarySearch(int arr[], int n, int key) {

  int s = 0, e = n - 1;
  int mid = s + (e - s / 2);

  while (s < e) {
    if (arr[mid] == key) {
      return true;
    } else if (key > arr[mid]) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }

    mid = s + (e - s / 2);
  }

  return false;
}

void print(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    cout << arr[i] << "  ";
  }
  cout << endl;

  return;
}

void selectionSort(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    int index = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[index]) {
        index = j;
      }
    }

    if (index != i) {
      swap(arr[index], arr[i]);
    }
  }

  cout << "After SELECTION SORT: " << endl;
  print(arr, 7);
}

void bubbleSort(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    bool is_swapped = false;

    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        is_swapped = true;
      }
    }

    if (!is_swapped) {
      break;
    }
  }

  cout << "After BUBBLE SORT: " << endl;
  print(arr, 7);
}

void insertionSort(int arr[], int n) {

  for (int i = 1; i < n; i++) {
    int temp = arr[i];

    int j;
    for (j = i - 1; j >= 0; j--) {
      if (temp < arr[j]) {
        arr[j + 1] = arr[j];
      } else {
        break;
      }
    }

    arr[j + 1] = temp;
  }

  cout << "After INSERTION SORT: " << endl;
  print(arr, 7);
}

void merge(int *arr, int s, int e) {
  int mid = (s + e)/ 2;;

  int len1 = mid - s + 1;
  int len2 = e - mid;

  int *first = new int[len1];
  int *second = new int[len2];

  int mainArrIndex = s;
  for(int i=0; i<len1; i++){
    first[i] = arr[mainArrIndex++];
  }

  mainArrIndex = mid+1;
  for(int i=0; i<len2; i++){
    second[i] = arr[mainArrIndex++];
  }

  int index1 = 0;
  int index2 = 0;
  mainArrIndex = s;

  while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2]){
      arr[mainArrIndex++] = first[index1++];
    } else {
      arr[mainArrIndex++] = second[index2++];
    }
  }

  while(index1 < len1){
    arr[mainArrIndex++] = first[index1++];
  }

  while(index2 < len2){
    arr[mainArrIndex++] = second[index2++];
  }

  delete []first;
  delete []second;

  
}

void mergeSort(int *arr, int s, int e) {

  if (s >= e) {
    return;
  }

  int mid = (s + e)/ 2;

  mergeSort(arr, s, mid);
  mergeSort(arr, mid + 1, e);;
  merge(arr, s, e);
}

int partition(int *arr, int s, int e){
  int pivot = arr[s];
  int count = 0;

  for(int i=s+1; i<e;i++){
    if(arr[i] < pivot)
      count++;
  }

  int pivotIndex = s + count;
  swap(arr[pivotIndex], arr[s]);

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
    return;
  }

  int p = partition(arr, s, e);
  quickSort(arr, s, p-1);
  quickSort(arr, p+1, e);
}

int main() {

  int arr[]{23, 45, 66, 69, 78, 81, 93};
  int size = 7;

  bool res = binarySearch(arr, size, 44);

  if (res) {
    cout << "found" << endl;
  } else {
    cout << "Not found" << endl;
  }

  int arr2[]{56, 88, 77, -2, 14, 7, 109};
  selectionSort(arr2, 7);
  bubbleSort(arr2, 7);
  insertionSort(arr2, 7);
  
  mergeSort(arr2, 0, 7-1);
  cout << "After MERGE SORT: " << endl;
  print(arr2, 7);

  quickSort(arr2, 0, 7-1);
  cout << "After QUICK SORT: " << endl;
  print(arr2, 7);

  return 0;
}
