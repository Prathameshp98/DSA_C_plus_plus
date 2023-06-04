#include <iostream>

using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int data){
      this->data = data;
      this->next = NULL;
    }

    ~Node(){
      cout << "Node with value " << this->data << " has been dequeued." << endl;
    }
};

bool isEmpty(Node* front){
  return front == NULL ? true : false;
}

void getFront(Node* front){
  if(!isEmpty(front)){
    cout << "Front Element: " << front->data << endl;
  } else {
    cout << "Queue is empty" << endl;
  }
}

void enqueue(Node* &front, Node* &rear, int data){
  Node* newNode = new Node(data);
  cout << data << " Enqueued." << endl;
  
  if(front == NULL){   // first element
    rear = front = newNode;
    return;
  }

  rear->next = newNode;
  rear = newNode;

  
  return;
}

void dequeue(Node* &front, Node* &rear){
  if(front == NULL){
    cout << "Queue Underflow" << endl;
    return;
  }
  
  Node* temp = front;

  front = front->next;
  temp->next = NULL;
  delete temp;

  return;
}

void display(Node* front){
  if(isEmpty(front)){
    cout << "Queue is empty" << endl;
    return;
  }

  Node* current = front;
  while(current != NULL){
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << endl;

  return;
}

int main() {

  Node* front = NULL;
  Node* rear = NULL;

  getFront(front);

  enqueue(front, rear, 5);
  enqueue(front, rear, 8);
  enqueue(front, rear, 10);
  enqueue(front, rear, 13);

  display(front);

  dequeue(front, rear);
  dequeue(front, rear);
  dequeue(front, rear);
  dequeue(front, rear);
  dequeue(front, rear);

  display(front);

  // cout << "Front: " << front->data << endl;
  // cout << "Rear: " << rear->data << endl;

  return 0;
}
