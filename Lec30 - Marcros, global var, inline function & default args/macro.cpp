#include <iostream>
#include <vector>
#include <string>
#define PI 3.14  // macro - use macro to save space for that variable

using namespace std;

int main()
{
  int rad;
  cin >> rad;
  cout << "Enter the radius of circle: " << endl;

  // PI = PI + 1;  // Error: cannot be changed

  double area = PI * rad * rad;
  cout << "Area: " << area << endl; 
  
    
  return 0;
}


