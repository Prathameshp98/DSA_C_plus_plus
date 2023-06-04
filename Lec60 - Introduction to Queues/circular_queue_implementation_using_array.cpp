#include <iostream>
#include <queue>

using namespace std;

class CircularQueue {
  public:
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int size){
      this->size = size;
      arr = new int[size];
      front = -1;
      rear = -1;
    }

    ~CircularQueue(){
      cout << "Queue destroyed" << endl;
    }

    void enqueue(int);
    void dequeue();

};

void CircularQueue::enqueue(int data){
  if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
    cout << "Queue overflow" << endl;
  } else if(front == -1) { // first element to push
    front = rear = 0;
    arr[rear] = data;
  } else if(rear == size -1 && front!= 0) {
    rear = 0; // to maintain cyclic nature
    arr[rear] = data;
  } else {
    rear++;
  }
}

void CircularQueue::dequeue(){
  if(front == -1){
    cout << "Queue underflow" << endl;
  } 

  int ans = arr[front];
  arr[front] = -1;
  if(front == rear){ // single element is present
    front = rear = -1;
  } else if(front == size - 1){
    front = 0; // to maintain cyclic nature
  } else {
    front++; 
  }
}


int main() {

  CircularQueue q(5);

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(5);
  q.enqueue(7);
  q.enqueue(9);

  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();

  
  
  return 0;
}
