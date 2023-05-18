#include <iostream>
#include<array>

using namespace std;


int main() {

  array<int, 5>arr {1, 4, 5, 7, 9};

  int size = arr.size();

  for(size_t i=0;i<size; i++){
    cout << arr.at(i) << " ";
  }
  cout << endl;

  cout << "Empty or Not: " << arr.empty() << endl;
  cout << "Front element: " << arr.front() << endl;
  cout << "Back element: " << arr.back() << endl;

  return 0;
}