#include <iostream>
#include <queue>

using namespace std;

class Queue {
  public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
      this->size = size;
      arr = new int[size];
      front = 0;
      rear = 0;
    }

    ~Queue(){
      cout << "Queue destroyed" << endl;
    }

    void enqueue(int);
    void dequeue();
    void getFront();
    void isEmpty();

};

void Queue::enqueue(int data){
  if(rear - front < size){
    arr[rear] = data;
    rear++;
    cout << data << " enqueued" << endl;
  } else {
    cout << "Queue overflow" << endl;
  }
}

void Queue::dequeue(){
  if(rear > 0){
    cout << arr[front] << " dequeued" << endl;
    for(size_t i=0; i<rear-1; i++){
      arr[i] = arr[i+1];
    }
    rear--;
  } else {
    cout << "Queue underflow" << endl;
  }
}

void Queue::getFront(){
  if(rear > 0){
    cout << "Front element is " << arr[front] << endl;
  } else {
    cout << "Queue is empty" << endl;
  }
}

void Queue::isEmpty(){
  if(rear == front){
    cout << "Queue is empty" << endl;
  } else {
    cout << "Queue is not empty" << endl;
  }
}

int main() {

  Queue q(5);

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);

  q.getFront();
  
  q.enqueue(5);
  q.enqueue(7);
  q.enqueue(9);

  q.dequeue();
  q.dequeue();
  q.dequeue();

  q.getFront();
  q.isEmpty();
  
  q.dequeue();
  q.dequeue();
  q.dequeue();

  q.isEmpty();
  
  
  return 0;
}
