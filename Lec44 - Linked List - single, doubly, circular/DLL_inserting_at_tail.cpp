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

  cout << "Length of DLL: " << length(head) << endl;
  
  cout << "Head is pointed at: " << head->data << endl;
  cout << "Tail is pointed at: " << tail->data << endl;

  return 0;
}
