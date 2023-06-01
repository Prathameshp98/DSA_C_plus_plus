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

    ~Node(){
      cout << "Node " << this->data << " has been destroyed" << endl;
    }

};

void insertAtHead(Node* &head, int data){
  Node* newNode = new Node(data);

  newNode->next = head;
  head = newNode;
}

void insertAtTail(Node* &tail, int data){
  Node* newNode = new Node(data);

  tail->next = newNode;
  newNode->next = NULL;
  tail = tail->next;

}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos){

  // if insertion is at head node
  if(pos == 1){
    insertAtHead(head, data);
    return;
  }
  
  Node* newNode = new Node(data);

  int current_pos = 0;
  Node* current = head;

  while(current_pos < pos-1){
    current = current->next;
    current_pos++;
     
    if(current == NULL){
      cout << "Position more than LL size" << endl;
      return;
    }
  }

  newNode->next = current->next;
  current->next = newNode;

  // inserting at last postion
  if(newNode->next == NULL){
    tail = newNode;
  }

}

void deleteByValue(Node* &head, int value){
  Node* current = head;
  Node* prev = NULL;
  
  if(head->data == value){
    head = head->next;
    current->next = NULL;
    delete current;
  } else {

    while(current->data != value){
      prev = current;
      current = current->next;

      if(current == NULL){
        cout << "Node with value " << value << " not found!" << endl;
        return;
      }
    }

    prev->next = current->next;
    current->next = NULL;
    delete current;
    
  }
  
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

  insertAtPosition(head, tail, 14, 2);
  insertAtPosition(head, tail, 14, 7);
  insertAtPosition(head, tail, 9, 1);

  print(head);

  deleteByValue(head, 10);

  print(head);

  deleteByValue(head, 22);

  return 0;
}
