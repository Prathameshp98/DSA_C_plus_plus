#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{

  char ch[6]{"abcde"};
  cout << ch << endl;

  char *c = &ch[0];
  cout << c << endl;

  char temp = 'z';
  char *p = &temp;
  cout << p << endl;
  
  return 0;
}


