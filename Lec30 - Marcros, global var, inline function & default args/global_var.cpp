#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Do not use global var bcoz it can be modified by any function

int s = 12; // global to entire program

void a(){
  int y = 3; // local var to a()
}

void b(){
  
}

int main()
{
  int x = 2; //local var to int main
  {
    int z = 3; // local var to this block
  }
   
  return 0;
}


