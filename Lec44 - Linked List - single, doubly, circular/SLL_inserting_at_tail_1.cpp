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

void insertAtTail(Node* &head, int data){
  Node* newNode = new Node(data);
  Node* current = head;

  // find the tail by traversing
  while(current->next != NULL){
    current = current->next;
  }

  // pointed new Node to next of tail
  current->next = newNode;
  newNode->next = NULL;

}

void print(Node* &head){
  Node* current = head;

  while(current != NULL){
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
  
}

int main() {

  // creating head/first node
  Node* newNode = new Node(10);
  // cout << newNode->data << endl;
  // cout << newNode->next << endl;

  // pointing head pointer to first node
  Node* head = newNode;

  insertAtTail(head, 12);
  insertAtTail(head, 15);
  insertAtTail(head, 17);

  print(head);

  return 0;
}
