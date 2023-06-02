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

  // if LL is empty
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

  // assign tail to new Node
  if(current == tail){
    tail = newNode;
  }
  newNode->next = current->next;
  current->next = newNode;
  
}

void deleteNode(Node* &tail, int pos){

  if(tail == NULL){
    cout << "CLL is empty" << endl;
    return;
  }
  
  Node* current = tail->next;
  Node* prev = tail;
  int current_pos = 1;

  // if LL has single node
  if(current->next == current){
    current->next = NULL;
    tail = NULL;
    delete current;
    return;
  }

  while(current_pos < pos){
    if(current == tail){
      cout << "Position out of range of CLL." << endl;
      return;
    }

    prev = current;
    current = current->next;
    current_pos++;
  }
 
  if(current == tail){
    tail = prev;
  }
 
  prev->next = current->next;
  current->next = NULL;
  delete current;
  
}

void print(Node* tail){
  if(tail == NULL){
    return;
  }
  
  Node* current = tail->next;

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

  deleteNode(tail, 2);
  print(tail);

  deleteNode(tail, 3);
  print(tail);

  deleteNode(tail, 1);
  print(tail);

  deleteNode(tail, 1);
  print(tail);

  // cout << "Tail is located at value: " << tail->data << endl;

  return 0;
}
