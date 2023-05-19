#include <iostream>
#include<queue>

using namespace std;


int main() {

  // stack (first in first out) 

  queue <string> s;

  s.push("Mr.");
  s.push("Prathamesh");
  s.push("Narendra");
  s.push("Patil");

  cout << "Empty or not: " << s.empty() << endl;
  cout << "Size: " << s.size() << endl;

  cout << "Top element: " << s.front() << endl;
  s.pop();
  
  cout << "Top element: " << s.front() << endl;
  s.pop();
  
  cout << "Top element: " << s.front() << endl;
  s.pop();
  
  cout << "Top element: " << s.front() << endl;

  return 0;
}