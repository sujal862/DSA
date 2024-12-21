#include <iostream>
#include<queue>
#include <vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
    }
};

void revinorder(Node* root, vector<int>& dec){
    if(root == NULL) return ;
    revinorder(root->right, dec);        
    dec.push_back(root->val);
    revinorder(root->left, dec);
}

//inserting the value from arr in  tree in preorder 
void preorder(Node* root, vector<int>& arr, int& i){
    if(root == NULL) return ;
    root->val = arr[i++];
    preorder(root->left, arr, i);        
    preorder(root->right, arr, i);
}

void levelOrderQueue(Node* root){   //for checking (is not part of Question)
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        int n = q.size();
        while(n--){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        }
    cout<<endl;
    }
}

int main(){
    Node* a = new Node(10); 
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    vector<int> dec; 
    levelOrderQueue(a);
    revinorder(a, dec); //reverse inorder traversal
    int i =0;
    preorder(a, dec, i); // BST -> MaxHeap
    levelOrderQueue(a);
}