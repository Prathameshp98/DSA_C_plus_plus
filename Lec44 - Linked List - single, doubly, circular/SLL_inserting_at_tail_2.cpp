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

void insertAtTail(Node* &tail, int data){
  Node* newNode = new Node(data);

  tail->next = newNode;
  tail = tail->next;

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
  Node* headNode = new Node(10);

  // pointing head pointer to first node
  Node* head = headNode;
  Node* tail = headNode;

  insertAtTail(tail, 12);
  insertAtTail(tail, 15);
  insertAtTail(tail, 17);

  print(head);

  return 0;
}
