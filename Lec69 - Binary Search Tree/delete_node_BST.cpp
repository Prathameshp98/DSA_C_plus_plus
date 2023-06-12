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

Node* deleteNodeBST(Node* root, int key){
  if(root == NULL){
    return root;  
  }
  
  if(root->data == key){
    // case 1: node has no children
    if(root->left == NULL && root->right == NULL){
      delete root;
      return NULL;
    }

    // case 2: node has left child
    if(root->left != NULL && root->right == NULL){
      Node* temp = root->left;
      delete root;
      return temp;
    }
    
    // case 3: node has right child
    if(root->left == NULL && root->right != NULL){
      Node* temp = root->right;
      delete root;
      return temp;
    }

    // case 4: both child are present
    if(root->left != NULL && root->right != NULL){
      int mini = findMin(root->right);
      root->data = mini;
      root->right = deleteNodeBST(root->right, mini);
      return root;
    }
    
  } else if(root->data > key){
    root->left = deleteNodeBST(root->left, key);
    return root;
  } else {
    root->right = deleteNodeBST(root->right, key);
    return root;
  }

    
  
  
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

  cout << "Level order traversal of BST before deletion:" << endl;
  levelOrderTraversal(root);

  root = deleteNodeBST(root, 8);

  cout << "Level order traversal of BST after deletion:" << endl;
  levelOrderTraversal(root);

  return 0;
}
