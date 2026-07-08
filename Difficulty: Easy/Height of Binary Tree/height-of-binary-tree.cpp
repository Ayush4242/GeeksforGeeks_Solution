/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  int c=0;
    int height(Node* root) {
        if(root==nullptr){
            return -1;
        }
        int lr=height(root->left);
        int rh=height(root->right);
        return max(lr,rh)+1;
        
    }
};