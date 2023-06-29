#include <iostream>
#include <queue>

using namespace std;

// Max Heap
class Heap {
  public:
    int arr[100];
    int size;

    Heap(){
      arr[0] = -1;
      size = 0;
    }

    void insert(int data){
      size = size + 1;
      int value = size;
      arr[value] = data;

      while(value > 1){
        int parent = value/2;
        
        if(arr[parent] < arr[value]){
          swap(arr[parent], arr[value]);
          value = parent;
        } else {
          return;
        }
      }
      
    }

    void deleteNode(){
      if(size == 0){
        cout << "Nothing to delete" << endl;
        return;
      }

      arr[1] = arr[size];
      size--;
      int index = 1;

      while(index < size){
        int left_child = index*2;
        int right_child = index*2 + 1;

        if(index < size && arr[index] < arr[left_child]){
          swap(arr[index], arr[left_child]);
          index = left_child;
        } else if(index < size && arr[index] < arr[right_child]){
          swap(arr[index], arr[right_child]);
          index = right_child;
        } else {
          return;
        }
        
      }
      
    }

    void print(){

      cout << "Printing heap: " << endl;
      for(size_t i=1; i<=size; i++){
        cout << arr[i] << "  ";
      } cout << endl;
      
    }

};

void heapify(int arr[], int n, int i){

  int largest = i;
  int left = largest*2;
  int right = largest*2 + 1;

  if(left <= n && arr[left] > arr[largest]){
    largest = left;
  } 
  if(right <= n && arr[right] > arr[largest]){
    largest = right;
  } 


  if(largest != i){
    swap(arr[largest], arr[i]);
  }
    
  return;
  
}

void solveHeapify(int arr[], int n){

  int leaf_nodes = (n/2 + 1);
  int non_leaf_nodes = n - leaf_nodes;

  for(int i=non_leaf_nodes; i>0; i--){
    heapify(arr, n, i);
  }

  cout << "Heapified: " << endl;
  for(int i=1; i<=n; i++){
    cout << arr[i] << "  ";
  } cout << endl;
  
}

void heapSort(int arr[], int n){

  int size = n;
  while(n > 1){
    swap(arr[1], arr[n]);
    n--;  

    heapify(arr, n, 1);
  }

  cout << "Sorted: " << endl;
  for(int i=1; i<=size; i++){
    cout << arr[i] << "  ";
  } cout << endl;
  
}

int main() {

  Heap h;

  h.insert(23);
  h.insert(21);
  h.insert(18);
  h.insert(19);
  h.insert(20);

  h.print();

  h.deleteNode();

  h.print();

  int arr[] = {-1, 20, 22, 19, 23, 18};
  solveHeapify(arr, 5);

  int heap[] = {-1, 23, 21, 18, 19, 20};
  heapSort(heap, 5);


  return 0;
}
