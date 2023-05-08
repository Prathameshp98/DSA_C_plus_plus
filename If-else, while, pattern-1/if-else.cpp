

#include <iostream>

using namespace std;

int main() {

  char a;
  cin >> a;

  if(a >= 97 && a<=122){
    cout << "This is lowercase" << endl;
  } else if(a >= 65 && a<=90){
    cout << "This is uppercase" << endl;
  } else if(a >= 0 && a<=9) {
    cout << "This is numeric" << endl;
  }
}