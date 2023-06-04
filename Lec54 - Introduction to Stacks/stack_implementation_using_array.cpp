#include <iostream>

using namespace std;

class Stack{

public:
  int *arr;
  int top;
  int size;

  Stack(int size){
    this->size = size;
    arr = new int[size];
    top = -1;

    cout << "Stack of size " << size << " created." << endl;
  }

  void push(int element){   // O(1)
    if(top < size-1){
      top++;
      arr[top] = element;
      cout << element << " inserted." << endl;
    } else {
      cout << "Stack Overflow" << endl;
    }
  }

  void pop(){     // O(1)
    if(!isEmpty()){
      cout << arr[top] << " removed from stack" << endl;
      top--;
    } else {
      cout << "Stack Underflow" << endl;
    }
  }

  int peek(){     // O(1)
    if(top >= 0){
      return arr[top];
    } else {
      cout << "Stack is empty" << endl;
      return -1;
    }
  }

  bool isEmpty(){    // O(1)
    if(top < 0){
      return true;
    } else {
      return false;
    }
  }

};

int main() {

  cout << boolalpha;

  Stack s(5);

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);

  if(s.peek() != -1)
    cout << "Top Element: " << s.peek() << endl;

  if(s.isEmpty()){
    cout << "Stack is empty" << endl;
  } else {
    cout << "Stack is not empty" << endl;
  }

  s.pop();
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  s.pop();
 

  return 0;
}
