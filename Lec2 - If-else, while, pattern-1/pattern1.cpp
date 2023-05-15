

#include <iostream>

using namespace std;

int main() {

  int x, y, i{0}, j{0};
  cin >> x >> y;

  while(i < x){
    while(j < y){
      cout << "* ";
      j += 1;
    }
    cout << endl;
    j = 0;
    i += 1;
  }
}