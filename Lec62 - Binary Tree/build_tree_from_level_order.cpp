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

void inorder(Node* &root){
  if(root == NULL){
    return;
  }

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void preorder(Node* &root){
  if(root == NULL){
    return;
  }

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(Node* &root){
  if(root == NULL){
    return;
  }

  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

void buildTreeFromLevelOrder(Node* &root){
  queue<Node*> q;
  int data;
  cout << "Enter the data for root " << endl;
  cin >> data;
  root = new Node(data);
  q.push(root);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    cout << "Enter left node for " << temp->data << endl;
    int leftData;
    cin >> leftData;

    if(leftData != -1){
      temp->left = new Node(leftData);
      q.push(temp->left);
    }

    cout << "Enter right node for " << temp->data << endl;
    int rightData;
    cin >> rightData;

    if(rightData != -1){
      temp->right = new Node(rightData);
      q.push(temp->right);
    }
    
  }
  
}

int main() {

  Node* root = NULL;

  buildTreeFromLevelOrder(root);
  cout << "Level order traversal of the BT:" << endl;
  levelOrderTraversal(root);

  // 1 3 7 -1 -1 8 -1 -1 4 -1 -1
  // root = buildTree(root);

  // cout << "Level order traversal of the BT:" << endl;
  // levelOrderTraversal(root);

  // cout << "Inorder traversal of BT:" << endl;
  // inorder(root);
  // cout << endl;

  // cout << "Preorder traversal of BT:" << endl;
  // preorder(root);
  // cout << endl;

  // cout << "Postorder traversal of BT:" << endl;
  // postorder(root);
  // cout << endl;

  return 0;
}
