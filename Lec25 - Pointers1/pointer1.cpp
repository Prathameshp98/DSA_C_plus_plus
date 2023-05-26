#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  int num{5};

  cout << "value of num is " << num << endl;
  cout << "Address is num : " << &num << endl;
  int *p{nullptr};

  cout << "Address at *p : " << p << endl;
  cout << "Value of *p : " << *p << endl;

  p = &num;
  cout << "Address at *p : " << p << endl;
  cout << "Value of *p : " << *p << endl;

  cout << "Size of p : " << sizeof p << endl; // always 8 in case of any data type  

  (*p)++;
  cout << "value of num is " << num << endl;

  int copy = *p;
  copy++;
  cout << "value of copy is " << copy << endl;
  cout << "value of num is " << num << endl;

  int *q = p;
  cout << p << " - " << q << endl;
  cout << *p << " - " << *q << endl;

  q = q + 1;
  cout << q << endl; // moves to next int space ie increments by 4
  
 
  return 0;
}