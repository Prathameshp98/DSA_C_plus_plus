#include <iostream>

using namespace std;

class Node {

public:
  int data;
  Node *next;
  Node *prev;

  // node constructor
  Node(int data) {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }

  ~Node() { 
    cout << "Node " << this->data << " has been destroyed" << endl; 
  }

};

int length(Node *&head) {
  Node* current = head;
  int length = 0;

  while(current != NULL){
    length++;
    current = current->next;
  }

  return length;
}

void print(Node *&head) {
  Node *current = head;

  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

int main() {

  Node *firstNode = new Node(5);
  Node *head = firstNode;

  print(head);
  cout << length(head) << endl;

  return 0;
}
