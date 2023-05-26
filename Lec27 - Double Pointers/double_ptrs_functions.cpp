#include <iostream>
#include <vector>
#include <string>

using namespace std;

void update(int **p){
  p = p + 1; // no change
  *p = *p + 1; // p  gets updated
  **p = **p + 1; // val gets updated ie. 10+1 = 11
}

int main()
{
  int val = 10;
  int *p = &val;
  int **p2 = &p; // double pointer

  update(p2);
  
  return 0;
}


