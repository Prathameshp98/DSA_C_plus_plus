

#include <iostream>

using namespace std;

int main() {

  int x, y, i{1}, j{1};
  cin >> x >> y;

  while (i <= x) {
    j = i;
    while (j <= y) {
      cout << i << " ";
      j += 1;
    }
    
    cout << endl;
    i += 1;
  }
}