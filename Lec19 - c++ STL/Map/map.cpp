#include <iostream>
#include <map>

using namespace std;

int main() {

  // map - stores elements in ordered format in key value pair.

  map <int, string> m;

  m[1] = "Mr.";
  m[3] = "Prathamesh";
  m[5] = "Narendra";
  m[8] = "Patil";
  m.insert({10, "Vaishali"});

  for(auto i: m){
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;

  cout << "count of 3: " << m.count(3) << endl;

  m.erase(8);
  for(auto i: m){
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;


  auto it = m.find(5);
  for(auto i=it; i!=m.end(); i++){
    cout << (*i).first << " " << (*i).second << endl;
  }
  

  return 0;
}