#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int val = 10;
  int *p = &val;
  int **p2 = &p; // double pointer

  cout << "value of p : " << p << endl;
  cout << "address of p : " << &p << endl;
  cout << "value of p2 : " << p2 << endl;

  cout << "value of i : " << val << endl;
  cout << "value of i : " << *p << endl;
  cout << "value of i : " << **p2 << endl;

  cout << "value of p : " << &val << endl;
  cout << "value of p : " << p << endl;
  cout << "value of p : " << *p2 << endl;

  cout << "value of p2 : " << p2 << endl;
  cout << "value of p2 : " << &p << endl;
  
  return 0;
}


