#include <iostream>
#include <set>

using namespace std;

int main() {

  // set - saves the elements in sorted order and unique elements. 

  set <int> s;

  s.insert(5);
  s.insert(3);
  s.insert(1);
  s.insert(0);
  s.insert(2);
  s.insert(0);
  s.insert(1);
  s.insert(0);
  s.insert(2);

  for(auto i: s){
    cout << i << " ";
  }
  cout << endl;

  
  set<int>::iterator it = s.begin();
  it++;
  s.erase(it);

  for(auto i: s){
    cout << i << " ";
  }
  cout << endl;


  cout << "count of 3: " << s.count(3) << endl;


  set<int>::iterator itr = s.find(3); //find gives iterator to position of 3
  for(auto it=itr; it!=s.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
  

  return 0;
}