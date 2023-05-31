#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Notes
// 1. Inline function 
// - converts single line function to more optimised form which can
// reduce memory consumption and function overhead
// 2. Reference variable
// - use of ref var can reduce memory consumption since without it evertime
// a new variable a and b will be created in the function


inline int getMax(int &a, int &b){
  return (a>b) ? a : b;
}

int main()
{
  int a = 1, b = 2;
  int ans{};

  ans = getMax(a,b);
  cout << ans << endl;

  a = a + 3;
  b = b - 1;

  ans = getMax(a,b);
  cout << ans << endl;
   
  return 0;
}


