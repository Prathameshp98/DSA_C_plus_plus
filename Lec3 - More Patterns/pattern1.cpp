

#include <iostream>

using namespace std;

int main() {

  int x, y, i{1}, j{1};
  cin >> x >> y;

  while (i <= x) {
    j = 1;
    while (j <= y) {
      cout << j << " ";
      j += 1;
    }
    
    cout << endl;
    i += 1;
  }
}