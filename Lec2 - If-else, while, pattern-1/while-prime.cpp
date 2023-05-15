

#include <iostream>

using namespace std;

int main() {

  int num, i{2};
  bool isPrime{true};

  cin >> num;

  while (i < num / 2) {
    if (num % i == 0) {
      isPrime = false;
      break;
    }

    i += 1;
  }

  if (isPrime) {
    cout << num << " is prime" << endl;
  } else {
    cout << num << " is not prime" << endl;
  }
}