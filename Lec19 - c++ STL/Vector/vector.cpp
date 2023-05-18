#include <iostream>
#include<vector>>

using namespace std;


int main() {

  // vector is of dynamic size
  vector<int> v;

  // size: is the current number of elements in vectors
  // capacity: is the number of memory spaces allocated to the vector

  cout << "Capacity :" << v.capacity() << endl;
  cout << "Size :" << v.size() << endl;

  v.push_back(1);
  
  cout << "Capacity :" << v.capacity() << endl;
  cout << "Size :" << v.size() << endl;

  v.push_back(2);
  
  cout << "Capacity :" << v.capacity() << endl;
  cout << "Size :" << v.size() << endl;

  v.push_back(3);
  
  cout << "Capacity :" << v.capacity() << endl;
  cout << "Size :" << v.size() << endl;

  v.push_back(4);
  
  cout << "Capacity :" << v.capacity() << endl;
  cout << "Size :" << v.size() << endl;

  v.push_back(5);

  for(size_t i=0;i<v.size(); i++){
    cout << v.at(i) << " ";
  }
  cout << endl;

  cout << "Front element: " << v.front() << endl;
  cout << "Back element: " << v.back() << endl;


  cout << endl;
  v.pop_back();
  cout << "After pop back: " << endl;
  for(size_t i=0;i<v.size(); i++){
    cout << v.at(i) << " ";
  }
  cout << endl << endl;

  // clear : removes all elements from vector
  // note - clear operation does not alter the capacity ie the memory alloacted
  
  cout << "Before clear -----------------------" << endl;
  cout << "Capacity :" << v.capacity() << endl;
  cout << "Size :" << v.size() << endl;
  v.clear();
  cout << "After clear -----------------------" << endl;
  cout << "Capacity :" << v.capacity() << endl;
  cout << "Size :" << v.size() << endl;


  cout << endl;
  vector<int> a(5,1); // vector of size 5 with all 1
  
  cout << "Printing a: " << endl;
  for(size_t i: a){
    cout << i << " ";
  }

  cout << endl;
  vector<int> copy(a); // vector a copied inside copy
  
  cout << "Printing copy: " << endl;
  for(size_t i: copy){
    cout << i << " ";
  }

  return 0;
}