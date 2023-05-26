#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int *p){
  cout << *p << endl;
}

void update(int *p){
  p = p + 1;
  cout << "Inside update: " << p << endl;
}

void updateValue(int *p){
  *p = *p + 1;
}

int getSum(int arr[], int n){

  cout << endl << "Size: " << sizeof(arr) << endl;
 
  int sum = 0;
  for(size_t i=0; i<n;i++){
    sum += arr[i];
  }
  return sum; 
}

int main()
{

  int value = 5;
  int *p = &value;

  print(p);

  cout << "Before update : " << p << endl;
  update(p);
  cout << "After update : " << p << endl;

  cout << "Before value: " << *p << endl;
  updateValue(p);
  cout << "After value: " << *p << endl;
  
  int arr[5]{1,2,3,4,5};

  cout << "Sum is " << getSum(arr, 5) << endl;
  cout << "Sum is " << getSum(arr+3, 2) << endl;
  
  return 0;
}


