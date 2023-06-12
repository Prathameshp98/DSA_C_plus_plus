#include <iostream>
#include<queue>

using namespace std;

//          10
//         / \           
//        8   14
//       / \    \
//      6   9   17

class Node {
 
  public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
      this->data = data;
      this->left = NULL;
      this->right = NULL;
    }
};

void levelOrderTraversal(Node* &root){

  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    if(temp == NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";
      if(temp->left){
        q.push(temp->left);
      }

      if(temp->right){
        q.push(temp->right);
      }
    }
    
  }
  
}

int findMin(Node* root){
  if(root == NULL){
    return 0;
  }
  
  Node* temp = root;

  while(temp->left != NULL){
    temp = temp->left;  
  }
  return temp->data;
  
}

int findMax(Node* root){
  if(root == NULL){
    return 0;
  }
  
  Node* temp = root;

  while(temp->right != NULL){
    temp = temp->right;  
  }
  return temp->data;
  
}

Node* insertIntoBST(Node* &root, int data){  // T.C. = O(logN), N = number of nodes

  if(root == NULL){
    root = new Node(data);
    return root;
  }

  if(data > root->data){
    root->right = insertIntoBST(root->right, data);
  } else {
    root->left = insertIntoBST(root->left, data);
  }

  return root;
  
}

void takeInput(Node* &root){

  int data;
  cin >> data;

  while(data != -1){
    root = insertIntoBST(root, data);
    cin >> data;
  }
  
}

int main() {

  Node* root = NULL;

  cout << "Enter stream of digits" << endl;
  takeInput(root);

  cout << "Level order traversal of BST:" << endl;
  levelOrderTraversal(root);

  cout << "Min: " << findMin(root) << endl;
  cout << "Max: " << findMax(root) << endl;

  return 0;
}
