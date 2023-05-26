#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{

  int arr[10]{2, 4, 6, 7, 11, 13};

  cout << "Address of first memory block : " << arr << endl; 
  cout << "first element value : " << arr[0] << endl; 
  cout << "Address of first memory block :  " << &arr[0] << endl; 
  
  cout << "first element value : " << *arr << endl; 
  cout << "first element value + 1 : " << *arr+1 << endl; 
  cout << "second element value : " << *(arr+1) << endl; 

  for(size_t i=0; i<6; i++){
    cout << *(arr+i) << " ";
  } cout << endl;

  int *ptr = arr;
  cout << "Size of arr : " << sizeof arr << endl;
  cout << "Size of ptr : " << sizeof ptr << endl;
  cout << "Size of ptr : " << sizeof (*ptr) << endl;
  
  return 0;
}


