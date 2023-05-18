#include <iostream>
#include<deque>>

using namespace std;


int main() {

  // Deque is a dynamic data structure and it can perform insertion and deletion from both the ends

  deque <int> d;

  d.push_back(1);
  d.push_front(2);
  d.push_back(3);
  d.push_front(4);

  for(size_t i: d){
    cout << i << " ";
  }
  cout << endl;

  d.pop_back();
  for(size_t i: d){
    cout << i << " ";
  }
  cout << endl;

  d.pop_front();
  for(size_t i: d){
    cout << i << " ";
  }
  cout << endl;

  cout << endl;
  cout << "Empty or Not: " << d.empty() << endl;
  cout << "Front element: " << d.front() << endl;
  cout << "Back element: " << d.back() << endl;

  d.push_back(5);
  d.push_back(6);
  d.push_back(7);

  cout << endl;
  for(size_t i=0; i<d.size(); i++){
    cout << d.at(i) << " ";
  }
  cout << endl;

  cout << endl << "After erase:" << endl;
  d.erase(d.begin(), d.begin() + 2);
  
  for(size_t i=0; i<d.size(); i++){
    cout << d.at(i) << " ";
  }
  cout << endl;

  return 0;
}