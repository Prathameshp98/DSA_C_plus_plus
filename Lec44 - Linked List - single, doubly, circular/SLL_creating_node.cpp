#include<iostream>

using namespace std;

class Node {

  public:
    int data;
    Node* next;

    // node constructor
    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};

int main() {

  Node* newNode = new Node(10);

  cout << newNode->data << endl;
  cout << newNode->next << endl;

  return 0;
}
