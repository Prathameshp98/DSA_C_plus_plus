#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &input, int count, int size) {

  // base case
  if (count == size / 2) {
    input.pop();
    return;
  }

  int num = input.top();
  input.pop();

  // recursive call
  solve(input, count + 1, size);

  input.push(num);
}

int main() {

  cout << boolalpha;

  stack<char> s;

  s.push(2);
  s.push(1);
  s.push(3);
  s.push(5);
  s.push(4);
  s.push(4);

  int count = 0;

  solve(s, count, s.size());

  return 0;
}
