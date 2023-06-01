#include<iostream>

using namespace std;

class Node {

  public:
    int data;
    Node* next;
    Node* prev;

    // node constructor
    Node(int data){
      this->data = data;
      this->prev = NULL;
      this->next = NULL;
    }

    ~Node(){
      cout << "Node " << this->data << " has been destroyed" << endl;
    }

};

void print(Node* &head){
  Node* current = head;
  
  while(current != NULL){
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
  
}


int main() {

  Node* firstNode = new Node(5);
  Node* head = firstNode;

  print(head);

  return 0;
}
