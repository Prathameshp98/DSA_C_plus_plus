#include <iostream>
#include<list>

using namespace std;


int main() {

  // List is basically doubly linked list where insertion and deletion is possible on both the ends, but elements cannot be randomly accessed. To access the element a pointer should be pointed at it by looping through it.

  list <int> l;

  l.push_back(1);
  l.push_front(2);
  l.push_back(3);
  l.push_front(4);

  for(size_t i: l){
    cout << i << " ";
  }
  cout << endl;

  l.pop_back();
  for(size_t i: l){
    cout << i << " ";
  }
  cout << endl;

  l.pop_front();
  for(size_t i: l){
    cout << i << " ";
  }
  cout << endl;

  cout << endl;
  cout << "Empty or Not: " << l.empty() << endl;
  cout << "Front element: " << l.front() << endl;
  cout << "Back element: " << l.back() << endl;

  l.push_back(5);
  l.push_back(6);
  l.push_back(7);

  l.erase(l.begin());

  cout << endl;
  for(size_t i: l){
    cout << i << " ";
  }

  return 0;
}