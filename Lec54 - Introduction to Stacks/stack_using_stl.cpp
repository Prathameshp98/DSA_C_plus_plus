#include <iostream>
#include <stack>

using namespace std;

int main() {

  cout << boolalpha;

  stack <int> s;

  s.push(1);
  s.push(2);
  s.push(3);

  cout << "Top element: " << s.top() << endl;

  s.pop();

  cout << "Top element: " << s.top() << endl;

  cout << "Is stack empty: " << s.empty() << endl;
  
  cout << "Stack size: " << s.size() << endl;

  return 0;
}
