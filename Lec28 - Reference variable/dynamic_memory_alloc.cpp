#include <iostream>
#include <vector>
#include <string>

using namespace std;

int getSum(int *arr, int n){
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
  }

  return sum;
}

int main()
{
  // Bad practice : never assign memory during runtime
  // int n;
  // cin >> n;
  // int arr[n]; // stored in stack

  // Good practice : assign memory during compile time
  int arr2[100]; // stored in stack


  // Dynamic Memory allocation
  char *ch = new char; // stored in heap
  // new char returns address which is stored in char pointer
  cout << "Size of ch" << sizeof ch << endl;

  // In char *ch = new char consumes 9 bytes ie new char = 1 and char *ch = 
  // 8bytes 
  // Similarly int *num - new int consumes 12 bytes ie new int = 4 and int *num 
  // = 8bytes

  int num;
  cin >> num;
  int *arrr = new int[num];
  int *arrr2 = new int[5]; // 28 bytes

  for(size_t i=0;i<num; i++){
    cin >> arrr[i];
  }

  int ans = getSum(arrr, num);

  cout << "Sum is " << ans << endl;

  // we need to manually clear dynamic memory, but static is cleared automatically 
  delete ch;
  delete []arrr;
  
  return 0;
}


