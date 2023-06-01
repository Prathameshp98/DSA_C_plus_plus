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

void insertAtHead(Node* &head, int data){
  Node* newNode = new Node(data);

  newNode->next = head;
  head = newNode;
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

  insertAtHead(head, 12);
  insertAtHead(head, 15);
  insertAtHead(head, 17);

  print(head);

  return 0;
}
