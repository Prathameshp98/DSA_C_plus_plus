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

pair<bool, int> isBalancedFast(Node* root){
  if(root == NULL){
    pair<bool, int> p = make_pair(true, 0);
    return p;
  }

  pair<bool, int> left = isBalancedFast(root->left);
  pair<bool, int> right = isBalancedFast(root->right);

  bool leftPart = left.first;
  bool rightPart = right.first;

  bool diff = abs(left.second - right.second) <= 1;

  pair <bool, int> ans;
  ans.second = max(left.second, right.second) + 1;

  (leftPart && rightPart && diff) ? ans.first = true : ans.first = false;
  return ans;
  
}

bool isBalanced(Node* root){

  return isBalancedFast(root).first;
}

int main() {

  Node* root = NULL;

  // 1 3 7 -1 -1 8 -1 -1 4 -1 -1
  root = buildTree(root);

  cout << "Is Binary Tree Balanced: ";
  isBalanced(root) ? cout << "True" : cout << "False";
  

  // T.C. = 0(N), N->number of nodes
  // S.C. = O(H),  H->height of tree
  

  return 0;
}
