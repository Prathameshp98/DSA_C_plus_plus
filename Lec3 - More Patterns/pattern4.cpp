

#include <iostream>

using namespace std;

int main() {

  int n, i{0}, j{0};
  cin >> n;

  while (i < n) {
    j = 3-i;
    while (j < n) {
      cout << i+1;
      j += 1;
    }
    
    cout << endl;
    i += 1;
  }
}