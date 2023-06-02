#include <iostream>

using namespace std;

class Node {

public:
  int data;
  Node *next;

  // node constructor
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }

  ~Node() { 
    cout << "Node " << this->data << " has been destroyed" << endl; 
  }

};

void insertAtElement(Node* &tail, int data, int element){
  Node* newNode = new Node(data);
  Node* current = tail;

  if(tail == NULL){
    tail = newNode;
    newNode->next = newNode;
    return;
  }

  while(current->data != element){
    if(current->next == tail){
       cout << "Element not found" << endl; 
    }
    current = current->next;
  }
  
  if(current == tail){
    tail = newNode;
  }
  newNode->next = current->next;
  current->next = newNode;
  
}

void print(Node* tail){
  Node* current = tail->next;

  if(tail == NULL){
    return;
  }

  do {
    cout << current->data << " ";
    current = current->next;
  } while(current != tail->next);

  cout << endl;

  return;
  
}

int main() {

  Node* tail = NULL;

  insertAtElement(tail, 10, 1);
  insertAtElement(tail, 12, 10);
  insertAtElement(tail, 13, 10);
  insertAtElement(tail, 11, 13);

  print(tail);

  cout << "Tail is located at value: " << tail->data << endl;

  return 0;
}
