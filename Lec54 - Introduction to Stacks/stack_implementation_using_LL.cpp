#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }

  ~Node() {
    cout << "Node with value " << this->data << " has been popped." << endl;
  }
};

void pop(Node *&top) {
  if (top == NULL) {
    cout << "Stack underflow" << endl;
    return;
  }

  Node *temp = top;
  top = top->next;
  temp->next = NULL;
  delete temp;
}

void push(Node *&top, int data) {
  Node *newNode = new Node(data);

  newNode->next = top;
  top = newNode;

  cout << data << " pushed." << endl;
  return;
}

bool isEmpty(Node *top) { return top == NULL ? true : false; }

void getTop(Node *&top) {
  if (!isEmpty(top))
    cout << "Top Element: " << top->data << endl;
  else
    cout << "Stack is empty" << endl;
}

void display(Node *&top) {
  if (top == NULL) {
    cout << "Stack is empty" << endl;
    return;
  }

  Node *current = top;

  while (current != NULL) {
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << endl;

  return;
}

int main() {

  Node *top = NULL;

  getTop(top);

  push(top, 5);
  push(top, 7);
  push(top, 8);
  display(top);

  getTop(top);

  pop(top);

  display(top);

  pop(top);
  pop(top);
  pop(top);

  display(top);

  return 0;
}
