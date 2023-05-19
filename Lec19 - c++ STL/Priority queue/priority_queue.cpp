#include <iostream>
#include<queue>

using namespace std;


int main() {

  // priority queue (max heap/ min heap)
  // In max-heap the order of removal of element is always greatest to smallest
  // While in min-heap the order is smallest to greatest

  // max-heap
  priority_queue<int> maxh;

  maxh.push(2);
  maxh.push(1);
  maxh.push(3);
  maxh.push(4);

  int size = maxh.size();
  for(size_t i=0; i<size; i++){
    cout << maxh.top() << " ";
    maxh.pop();
  }
  cout << endl;
  

  // min-heap
  priority_queue<int, vector<int>, greater<int>> minh;

  minh.push(2);
  minh.push(1);
  minh.push(3);
  minh.push(4);

  int size2 = minh.size();
  for(size_t i=0; i<size2; i++){
    cout << minh.top() << " ";
    minh.pop();
  }
  cout << endl;

  cout << "Empty or not: " << minh.empty() << endl;
  

  return 0;
}