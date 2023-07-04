#include <iostream>
#include <map>
// In ordered map (based on bst), items are arranged in ascending order of insertion
// insertion, deletion and search are O(logN) complex
#include <unordered_map>
// In unordered map (based on hashmap), items are arranged in random order
// insertion, deletion and search are O(1) complex

using namespace std;

int main() {

  // keys are always unique
  unordered_map<string, int> m;

  //insertion
  // way 1
  pair <string, int> p = make_pair("prathamesh", 1);
  m.insert(p);

  // way 2
  pair <string, int> p2("rutuja", 2);
  m.insert(p2);

  // way 3
  m["patil"] = 3;
  m["patil"] = 4; // updating entry of key "patil" from 3 to 4


  // Search
  cout << "First Index: " << m["prathamesh"] << endl;
  cout << "Second Index: " << m.at("rutuja") << endl;

  // Size
  cout << "Size: " << m.size() << endl;

  // check presence
  cout << "Is Patil present: " << m.count("patil") << endl;
  cout << "Is pal present: " << m.count("pal") << endl;

  // earse
  m.erase("patil");
  cout << "Size: " << m.size() << endl;

  // iteration
  // way 1
  for(auto i: m){
    cout << i.first << " : " << i.second << endl;
  }

  // way 2
  unordered_map<string,int> :: iterator it = m.begin();
  while( it != m.end()){
    cout << it->first << " : " << it->second << endl;
    it++;
  }
  
  return 0;
}
