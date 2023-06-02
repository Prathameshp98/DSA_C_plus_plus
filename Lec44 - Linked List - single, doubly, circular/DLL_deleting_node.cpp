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

void insertAtTail(Node* &tail, int data){
  Node* newNode = new Node(data);

  tail->next = newNode;
  newNode->prev = tail;
  newNode->next = NULL;
  tail = newNode;

  return;
}

void insertAtHead(Node* &head, int data){
  Node* newNode = new Node(data);

  newNode->next = head;
  head->prev = newNode;
  head = newNode;

  return;
}

void insertAtPos(Node* &head, Node* &tail, int data, int pos){

  if(pos < 1){
    cout << "Position should be greater than 0" << endl;
    return;
  }

  if(pos == 1){
    insertAtHead(head, data);
    return;
  }

  Node* newNode = new Node(data);
  Node* current = head;
  int current_pos = 1;

  while(current_pos < pos){
    current = current->next;
    current_pos++;

    if(current == NULL){
      cout << "Position out of range." << endl;
      return;
    }
  }

  newNode->next = current->next;

  // if it is not last node
  if(current->next != NULL){
    current->next->prev = newNode;
  }
  
  current->next = newNode;
  newNode->prev = current;

  // in case of last node insertion
  if(newNode->next == NULL){
    tail = newNode;
  }

  return;
}

void deleteAtPos(Node* &head, Node* &tail, int pos){

  if(pos < 1){
    cout << "Position should be greater than 0" << endl;
    return;
  }
  
  Node* current = head;
  Node* prev = NULL;
  int current_pos = 1;

  if(pos == 1){
    head = head->next;
    current->next->prev = NULL;
    current->next = NULL;
    delete current;
    return;
  }

  while(current_pos < pos){

    prev = current;
    current = current->next;
    current_pos++;

    if(current == NULL){
      cout << "Position out of DLL limit" << endl;
      return;
    }
  }

  prev->next = current->next;

  if(current->next != NULL){
     current->next->prev = prev; 
  }
  if(current->next == NULL){
    tail = prev;
  }
  
  current->next = NULL;
  current->prev = NULL;
  delete current;

  return;
  
}

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
  Node *tail  = firstNode;

  print(head);

  insertAtHead(head, 4);
  insertAtHead(head, 2);
  insertAtHead(head, 1);

  print(head);

  insertAtTail(tail, 7);
  insertAtTail(tail, 9);
  insertAtTail(tail, 12);

  print(head);

  insertAtPos(head, tail, 8, 1);
  insertAtPos(head, tail, 10, 3);
  insertAtPos(head, tail, 14, 6);
  insertAtPos(head, tail, 24, 10);

  print(head);

  deleteAtPos(head, tail, 2);
  print(head);

  deleteAtPos(head, tail, 1);
  print(head);

  deleteAtPos(head, tail, 9);
  print(head);

  cout << "Length of DLL: " << length(head) << endl;
  
  cout << "Head is pointed at: " << head->data << endl;
  cout << "Tail is pointed at: " << tail->data << endl;

  return 0;
}
