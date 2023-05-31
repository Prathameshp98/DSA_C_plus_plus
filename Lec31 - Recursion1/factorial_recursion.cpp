#include <iostream>
#include <vector>
#include <string>

using namespace std;

// format

// Tail Recursion
// func(){
//   base case
//   Processing
//   Recursive_relation
// }

// Head Recursion
// func(){
//   base case
//   Recursive_relation
//   Processing
// }

int factorial(int n){

  // base case
  if(n==0)
    return 1;

  return n * factorial(n-1);
}

int main()
{
  int n;
  cin >> n;

  cout << factorial(n) << endl;
   
  return 0;
}


