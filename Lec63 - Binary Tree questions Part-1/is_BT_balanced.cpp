#include <iostream>
#include<queue>

using namespace std;

//          1
//         / \           
//        3   4
//       / \  
//      7  8  

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

Node* buildTree(Node* &root){
  cout << "Enter the data:" << endl;
  int data;
  cin >> data;
  root = new Node(data);

  if(data == -1){
    return NULL;
  }

  cout << "Enter the data to be inserted on left of " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter the data to be inserted on right of " << data << endl;
  root->right = buildTree(root->right);

  cout << root->data << endl;

  return root;
}

int height(Node* &root){
  if(root == NULL){
    return 0;
  }

  int left = height(root->left);
  int right = height(root->right);

  int ans = max(left, right) + 1;
  return ans;
}

bool isBalanced(Node* root){
  if(root == NULL){
    return true;
  }

  bool left = isBalanced(root->left);
  bool right = isBalanced(root->right);

  bool diff = abs(height(root->left) - height(root->right)) <= 1;

  return (left && right && diff) ? true : false;
}

int main() {

  Node* root = NULL;

  // 1 3 7 -1 -1 8 -1 -1 4 -1 -1
  root = buildTree(root);

  cout << "Is Binary Tree Balanced: ";
  isBalanced(root) ? cout << "True" : cout << "False";
  

  // T.C. = 0(N^2), N->number of nodes
  // S.C. = O(H),  H->height of tree
  

  return 0;
}
