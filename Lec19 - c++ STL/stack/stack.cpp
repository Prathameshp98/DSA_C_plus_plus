#include <iostream>
#include<stack>

using namespace std;


int main() {

  // stack (last in first out) can only remove and add elements from the top.

  stack <string> s;

  s.push("Mr.");
  s.push("Prathamesh");
  s.push("Narendra");
  s.push("Patil");

  cout << "Empty or not: " << s.empty() << endl;
  cout << "Size: " << s.size() << endl;

  cout << "Top element: " << s.top() << endl;
  s.pop();
  
  cout << "Top element: " << s.top() << endl;
  s.pop();
  
  cout << "Top element: " << s.top() << endl;
  s.pop();
  
  cout << "Top element: " << s.top() << endl;

  return 0;
}