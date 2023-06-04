#include <iostream>
#include <stack>

using namespace std;


int main() {

  cout << boolalpha;

  stack <char> s;
  string str;
  cin >> str;

  for(size_t i=0; i<str.size(); i++){
    s.push(str[i]);
  }

  for(size_t i=0; i<str.size(); i++){
    cout << s.top();
    s.pop();
  }

 

  return 0;
}
