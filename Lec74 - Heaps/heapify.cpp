#include <iostream>
#include <queue>

using namespace std;

// Max Heap
class Heap {
  public:
    int arr[100];
    int size = 0;

    Heap(){
      arr[0] = -1;
      size = 0;
    }

    // deleting root node
    void deleteNode(){

      if(size == 0){
        cout << "Nothing to delete." << endl;
        return;
      }
      
      arr[1] = arr[size]; // swap root node and last node 
      size--; // delete last node
      int index = 1;

      // move root node to its correct position
      while(index < size){

        int left_index = index*2;
        int right_index = index*2 + 1;

        if(left_index < size && arr[index] < arr[left_index]){
          swap(arr[index], arr[left_index]);
          index = left_index;
        } else if(right_index < size && arr[index] < arr[right_index]){
          swap(arr[index], arr[right_index]);
          index = right_index;
        } else {
          return;  
        }
        
      }
      
      return;
      
    }

    void insert(int value){
      size = size + 1;
      int index = size;
      arr[index] = value;

      while(index > 1){
        int parent = index/2;
        
        if(arr[parent] < arr[index]){
          swap(arr[parent], arr[index]);
          index = parent;
        } else {
          return;
        }
        
      }      
    }

    void print(){

      for(int i=1; i<=size; i++){
        cout << arr[i] << "  ";
      } cout << endl;
    }

    

};

void heapify(int arr[], int i, int n){

  int largest = i;
  int left = largest*2;
  int right = largest*2 + 1;

  if(left < n && arr[left] > arr[largest]){
    largest = left;
  } 
  if(right < n && arr[right] > arr[largest]){
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
    heapify(arr, i, n);
  }

  cout << endl << "Heapified heap:" << endl;
  for(int i=1; i<=n; i++){
    cout << arr[i] << "  ";
  } cout << endl;
  return;
  
}

int main() {

  Heap h;
  h.insert(20);
  h.insert(21);
  h.insert(18);
  h.insert(19);
  h.insert(23);

  h.print();

  h.deleteNode();

  h.print();

  int arr[] = {-1, 20, 22, 19, 23, 18};
  solveHeapify(arr, 5);

  return 0;
}
    