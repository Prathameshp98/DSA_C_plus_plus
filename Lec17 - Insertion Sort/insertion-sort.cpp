#include <iostream>
using namespace std;


void insertionSort(int arr[], int size) {

  for (size_t i = 1; i < size; i++) {

    int temp = arr[i];
    
    int j = i - 1;
    for (; j >= 0; j--) {

      if (arr[j] > temp) {
        arr[j + 1] = arr[j];
      } else {
        break;
      }
    }

    arr[j+1] = temp;
  }

  for (size_t i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int arr[]{12, 2, 34, 0, 56, 67, 10, -3, 8};
  int size = (sizeof(arr) / sizeof(int));

  insertionSort(arr, size);

  return 0;
}