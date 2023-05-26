#include <iostream>
#include <vector>
#include <string>

using namespace std;

void update(int n){
  n++;
}

void updateByReference(int &n){
  n++;
}

int& func(int a){ // BAD practice : num and ans will be destroyed after func excution, thus nthg is retuned
  int num = a;
  int &ans = num;
  return ans;
}

int main()
{
  int i = 10;
  int &j = i; // reference variable to i

  cout << i << " - " << j << endl;
  i++;
  cout << i << " - " << j << endl;
  j++;
  cout << i << " - " << j << endl;

  int n = 5;
  cout << "Before : " << n << endl;
  update(n);
  cout << "After : " << n << endl;

  cout << "Before : " << n << endl;
  updateByReference(n);
  cout << "After : " << n << endl;
  
  return 0;
}


