

#include <iostream>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arr[size];
  for(size_t i=0; i<size; i++)
    cin >> arr[i];

  for(size_t i=0; i<size; i+=2){
    int temp{};
    if(i+1 < size){
      temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }
  }

  for(size_t i=0; i<size; i++)
    cout << arr[i] << " ";
  
  
}