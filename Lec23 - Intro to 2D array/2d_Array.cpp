#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool linearSearch(int arr[][3], int key, int n, int m){

  for(size_t i=0; i<n; i++){
    for(size_t j=0; j<m; j++){
        if(arr[i][j] == key)
          return true;
    }
  }

  return false;
}

void rowSum(int arr[][3], int n, int m){
  
  for(size_t i=0; i<n; i++){
    int sum{0};
    for(size_t j=0; j<m; j++){
        sum += arr[i][j];
    }

    cout << "Sum of row " << i+1 << " is " << sum << endl;
  }
}

void wavePrint(int arr[][3], int n, int m){

  for(size_t i=0; i<m; i++){
    for(size_t j=0; j<n; j++){
      if(i%2 == 0)
        cout << arr[j][i] << " ";
      else
        cout << arr[2-j][i] << " ";
    }
  }
  
}

bool binarySearch(int arr[][3], int key, int n, int m){

  int start = 0, end = n*m - 1;
  
  while(start <= end){
    int mid = start + (end - start/2);

    if(key > arr[mid/m][mid%m])
      start = mid + 1;
    else if(key < arr[mid/m][mid%m])
      end = mid - 1;
    else
      return true;
  }

  return false;
  
}

int main() {

  int arr[3][3];

  for(size_t i=0; i<3; i++){
    for(size_t j=0; j<3; j++){
      cin >> arr[i][j];
    }
  }

  for(size_t i=0; i<3; i++){
    for(size_t j=0; j<3; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int key{};
  cout << "Enter the number to be searched: ";
  cin >> key;

  if(linearSearch(arr, key, 3, 3)){
    cout << key << " found" << endl;
  } else {
    cout << key << " not found" << endl;
  }

  rowSum(arr, 3, 3);

  wavePrint(arr, 3, 3);

  cout << endl;

  if(binarySearch(arr, key, 3, 3)){
    cout << key << " found" << endl;
  } else {
    cout << key << " not found" << endl;
  }
  
  return 0;
}