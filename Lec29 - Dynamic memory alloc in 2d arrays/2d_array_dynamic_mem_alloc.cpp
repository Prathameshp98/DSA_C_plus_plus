#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;

  // creation of 2d array
  int** arr = new int*[n];

  for(int i=0; i<n; i++){
    arr[i] = new int[n]; 
  }

  // taking input
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> arr[i][j]; 
    }
  } 

  // taking ouput
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << arr[i][j] << " "; 
    }cout << endl;  
  } 


  // different number of rows and cols
  int rows;
  cin >> rows;
  int cols;
  cin >> cols;

  int** arr2 = new int*[rows];

  for(int i=0; i<rows; i++){
    arr2[i] = new int[cols]; 
  }

  // taking input
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin >> arr2[i][j]; 
    }
  } 

  // taking ouput
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cout << arr2[i][j] << " "; 
    }cout << endl;  
  } 

  // releasing memory
  for(int i=0; i<rows; i++){
    delete [] arr2[i]; 
  }

  delete []arr2;
    
  return 0;
}


